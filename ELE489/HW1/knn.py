## kNN implementation Code

# Importing modules
import matplotlib.pyplot as plt 
import numpy as np 
import pandas as pd 
import seaborn as sns
import numpy as np
from collections import Counter

# Euclidian Distance function.
def eucdist(X_train, X_test_point):
    distances = []
    
    for row in range (len(X_train)):
        cur_train_point = X_train[row]
        cur_dist = 0
        
        for col in range (len(cur_train_point)):
            cur_dist += (cur_train_point[col] - X_test_point[col])**2
            
        cur_dist = np.sqrt(cur_dist)
        distances.append(cur_dist)
        
    distances = pd.DataFrame(data = distances, columns=['dist'])
    return distances

# Manhattan Distance function.
def mandist(X_train, X_test_point):
    distances = []

    for row in range(len(X_train)):
        cur_train_point = X_train[row]
        cur_dist = 0

        for col in range(len(cur_train_point)):
            cur_dist += abs(cur_train_point[col] - X_test_point[col])
        
        distances.append(cur_dist)

    distances = pd.DataFrame(data=distances, columns=['dist'])
    return distances

    
# A function that calculates the nearest K neighbours
def nn(distance_point, K):
    df_nearest = distance_point.sort_values(by=["dist"],axis=0)
    df_nearest = df_nearest[:K]
    
    return df_nearest

# Function that finds out and returns what is the most common class between those neighbours
def voting(df_nearest, y_train):
    counter_vote = Counter(y_train[df_nearest.index])
    
    y_pred = counter_vote.most_common()[0][0]
    return y_pred

# Main KNN function uses Euclidian Distance formula to calculate the distance between neighbours 
def KNN_euc(X_train,y_train,X_test, K):
    y_pred = []
    for X_test_point in X_test:
        distance_point = eucdist(X_train, X_test_point)
        df_nearest_point = nn(distance_point,K)
        y_pred_point = voting(df_nearest_point,y_train)
        y_pred.append(y_pred_point)
    
    return y_pred

# Same function but uses Manhattan Distance formula
def KNN_man(X_train,y_train,X_test, K):
    y_pred = []
    for X_test_point in X_test:
        distance_point = mandist(X_train, X_test_point)
        df_nearest_point = nn(distance_point,K)
        y_pred_point = voting(df_nearest_point,y_train)
        y_pred.append(y_pred_point)
    
    return y_pred
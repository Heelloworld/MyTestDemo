//
//  JElasticJElasticPullToRefreshConstants.h
//
//  Created by mifanJ on 16/4/6.
//  Copyright © 2016年 mifanJ. All rights reserved.
//

#ifndef JElasticPullToRefreshConstants_h
#define JElasticPullToRefreshConstants_h

// ContentOffset
static NSString *const JElasticPullToRefreshContentOffset = @"contentOffset";
// ContentInset
static NSString *const JElasticPullToRefreshContentInset = @"contentInset";
// Frame
static NSString *const JElasticPullToRefreshFrame = @"frame";
// PanGestureRecognizerState
static NSString *const JElasticPullToRefreshPanGestureRecognizerState = @"panGestureRecognizer.state";

// WaveMaxHeight
static CGFloat const JElasticPullToRefreshWaveMaxHeight = 70.0;        //弹性下拉波动的度  数值越大波动越大
// MinOffsetToPull
static CGFloat const JElasticPullToRefreshMinOffsetToPull = 95.0;
// LoadingContentInset
static CGFloat const JElasticPullToRefreshLoadingContentInset = 40.0;  //下拉出来的等待刷新数据的 context的大小
// LoadingViewSize
static CGFloat const JElasticPullToRefreshLoadingViewSize = 15.0;

#endif /* JElasticPullToRefreshConstants_h */

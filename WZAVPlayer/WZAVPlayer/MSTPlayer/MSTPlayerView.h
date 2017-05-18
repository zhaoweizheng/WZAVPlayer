//
//  MSTPlayerView.h
//  WZAVPlayer
//
//  Created by zwz on 2017/5/18.
//  Copyright © 2017年 赵伟争. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ChangeResolutionBlock)(UIButton *button);
typedef void(^SliderTapBlock)(CGFloat value);


@interface MSTPlayerView : UIView

/*** start button ***/
@property (nonatomic, strong) UIButton           *startBtn;

/*** The current playing time ***/
@property (nonatomic, strong) UILabel            *currentTimeLabel;

/*** The total time of video ***/
@property (nonatomic, strong) UILabel            *totalTimeLabel;

/*** Buffer progress bar ***/
@property (nonatomic, strong) UIProgressView     *progressView;

/*** UISlider ***/
@property (nonatomic, strong) UISlider           *videoSlider;

/***  Full screen button ***/
@property (nonatomic, strong) UIButton           *fullScreenBtn;

/*** Lock screen button ***/
@property (nonatomic, strong) UIButton           *lockBtn;

/*** 快进快退 ***/
@property (nonatomic, strong) UILabel            *horizontalLabel;

/*** back button ***/
@property (nonatomic, strong) UIButton           *backBtn;

/*** repeat playing button ***/
@property (nonatomic, strong) UIButton           *repeatPlayingBtn;

/*** bootom View ***/
@property (nonatomic, strong) UIImageView        *bottomImageView;

/*** top View ***/
@property (nonatomic, strong) UIImageView        *topImageView;

/*** Download Button ***/
@property (nonatomic, strong) UIButton           *downLoadBtn;

/*** Switch the video resolution button ***/
@property (nonatomic, strong) UIButton           *resolutionBtn;

/*** playing button ***/
@property (nonatomic, strong) UIButton           *playingBtn;

/*** resolution name array ***/
@property (nonatomic, strong) NSArray            *resolutionNameArray;

/*** 分辨率的View ***/
@property (nonatomic, strong) UIView             *resolutionView;


/*** Switch the video resolution Block ***/
@property (nonatomic, copy) ChangeResolutionBlock resolutionBlock;

/*** slider tap Block ***/
@property (nonatomic, copy) SliderTapBlock        tapBlock;

/** 系统菊花 */
@property (nonatomic, strong) UIActivityIndicatorView *activity;

//reset  ControlView
- (void)resetControlView;

//Switch the video resolution
- (void)resetControlViewForResolution;

//show ControlView
- (void)showControlView;

//hide ControlView
- (void)hideControlView;

@end

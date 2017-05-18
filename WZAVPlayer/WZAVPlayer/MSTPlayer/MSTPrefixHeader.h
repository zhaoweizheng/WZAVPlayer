
//
//  MSTPrefixHeader.h
//  WZAVPlayer
//
//  Created by zwz on 2017/5/18.
//  Copyright © 2017年 赵伟争. All rights reserved.
//

#ifndef MSTPrefixHeader_h
#define MSTPrefixHeader_h


#import "Masonry.h"


#define iPhone4s ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)


// 监听TableView的contentOffset
#define kMSTPlayerViewContentOffset          @"contentOffset"

// player的单例
#define ZMSTlayerShared                     [ZFBrightnessView sharedBrightnessView]
// 屏幕的宽
#define ScreenWidth                         [[UIScreen mainScreen] bounds].size.width
// 屏幕的高
#define ScreenHeight                        [[UIScreen mainScreen] bounds].size.height
// 颜色值RGB
#define RGBA(r,g,b,a)                       [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
// 图片路径
#define MSTPlayerSrcName(file)              [@"MSTPlayer.bundle" stringByAppendingPathComponent:file]

#endif /* MSTPrefixHeader_h */

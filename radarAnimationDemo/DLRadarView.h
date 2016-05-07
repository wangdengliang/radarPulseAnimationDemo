//
//  DLRadarImageView.h
//  wearable
//
//  Created by cenon on 16/5/7.
//  Copyright © 2016年 jawatch. All rights reserved.
//

#import <UIKit/UIKit.h>



@interface DLRadarView : UIView
@property (nonatomic,strong)UIImage * thumbnailImage;//中心图标
@property(nonatomic)UIColor *circleColor;
@property(nonatomic)UIColor *borderColor;
@property(assign,nonatomic)NSInteger pulsingCount;
@property(assign,nonatomic)double animationDuration;


-(instancetype)initWithFrame:(CGRect)frame andThumbnail:(NSString *)thumbnailUrl;//必须调用
@end

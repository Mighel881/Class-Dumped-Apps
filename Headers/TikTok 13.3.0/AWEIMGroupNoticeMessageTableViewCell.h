//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMSystemMessageTableViewCell.h"

@class CAShapeLayer, YYLabel;

@interface AWEIMGroupNoticeMessageTableViewCell : AWEIMSystemMessageTableViewCell
{
    CAShapeLayer *_noticeLayer;
    YYLabel *_noticeLabel;
}

+ (id)identifier;
+ (struct CGSize)contentSizeWithMesasge:(id)arg1;
@property(retain, nonatomic) YYLabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) CAShapeLayer *noticeLayer; // @synthesize noticeLayer=_noticeLayer;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (void)configWithMessage:(id)arg1;

@end

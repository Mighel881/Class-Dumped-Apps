//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEEditAndPublishViewData, UILabel, UIView;

@interface AWEEditAndPublishViewActionContainerModel : NSObject
{
    UIView *_topView;
    UILabel *_bottomLabel;
    UIView *_actionItemView;
    AWEEditAndPublishViewData *_data;
}

@property(retain, nonatomic) AWEEditAndPublishViewData *data; // @synthesize data=_data;
@property(nonatomic) __weak UIView *actionItemView; // @synthesize actionItemView=_actionItemView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;

@end

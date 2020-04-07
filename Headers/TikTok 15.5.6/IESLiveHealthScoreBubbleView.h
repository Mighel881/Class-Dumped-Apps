//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;
@protocol IESLiveInternalRouter, IESLiveTracker;

@interface IESLiveHealthScoreBubbleView : UIView
{
    UIImageView *_arrowView;
    UILabel *_contentLabel;
    UIView *_bubbleView;
    NSString *_content;
    NSString *_jumpUrl;
    id <IESLiveInternalRouter> _internalRouter;
    id <IESLiveTracker> _tracker;
}

@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) UIView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
- (void).cxx_destruct;
- (void)bubbleTap;
- (void)maskTap;
- (void)setup;
- (void)updateAnchorPoint:(struct CGPoint)arg1;
- (id)initWithContent:(id)arg1 jumpUrl:(id)arg2;

@end

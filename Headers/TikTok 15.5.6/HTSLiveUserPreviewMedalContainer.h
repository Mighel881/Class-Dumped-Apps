//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HTSLiveUserPreviewMedalContainer : UIView
{
    unsigned long long _numberOfViewInOneLine;
    UIView *_lastView;
    unsigned long long _viewCount;
    struct CGSize _viewSize;
    struct CGSize _spaceingSize;
}

@property(nonatomic) unsigned long long viewCount; // @synthesize viewCount=_viewCount;
@property(retain, nonatomic) UIView *lastView; // @synthesize lastView=_lastView;
@property(nonatomic) unsigned long long numberOfViewInOneLine; // @synthesize numberOfViewInOneLine=_numberOfViewInOneLine;
@property(nonatomic) struct CGSize spaceingSize; // @synthesize spaceingSize=_spaceingSize;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
- (void).cxx_destruct;
@property(readonly, nonatomic) double width;
@property(readonly, nonatomic) double height;
@property(readonly, nonatomic) unsigned long long lineCount;
- (void)appendView:(id)arg1;

@end

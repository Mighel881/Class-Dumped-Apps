//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEOneDayStoryWithCommentModel, UILabel;

@interface AWEOrangeStoryDetailTipsView : UIView
{
    UILabel *_infoLabel;
    AWEOneDayStoryWithCommentModel *_commentVideoModel;
}

@property(nonatomic) __weak AWEOneDayStoryWithCommentModel *commentVideoModel; // @synthesize commentVideoModel=_commentVideoModel;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
- (void).cxx_destruct;
- (_Bool)shouldShowDuoshanTail;
- (_Bool)duoshanHongbaoEnabled;
- (void)processJumpToXWithType:(long long)arg1;
- (void)onTapView;
- (void)refreshUserType:(long long)arg1 commentVideoModel:(id)arg2 shouldTrackEvent:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

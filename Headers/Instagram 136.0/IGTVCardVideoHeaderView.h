//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGGradientView, IGTVCardVideoHeaderViewModel, IGTVProgressScrubber, IGTVSeriesTagView, UIImageView, UILabel;

@interface IGTVCardVideoHeaderView : UIView
{
    IGTVCardVideoHeaderViewModel *_viewModel;
    IGGradientView *_gradientView;
    IGTVSeriesTagView *_seriesTagView;
    UIImageView *_checkImageView;
    IGTVProgressScrubber *_progressView;
    UILabel *_durationLabel;
}

- (void).cxx_destruct;
- (void)setGradientAlpha:(double)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithSeriesTagPreferredLength:(long long)arg1;

@end


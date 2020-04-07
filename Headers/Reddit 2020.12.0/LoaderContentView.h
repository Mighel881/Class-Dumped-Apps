//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class PreviewSpinnerView;

@interface LoaderContentView : BaseView
{
    BaseView *_initialFetchPlaceHolderView;
    PreviewSpinnerView *_previewSpinnerView;
}

@property(retain, nonatomic) PreviewSpinnerView *previewSpinnerView; // @synthesize previewSpinnerView=_previewSpinnerView;
@property(retain, nonatomic) BaseView *initialFetchPlaceHolderView; // @synthesize initialFetchPlaceHolderView=_initialFetchPlaceHolderView;
- (void).cxx_destruct;
- (void)removePlaceholders;
- (void)showFailedPlaceholder;
- (void)showInitialPlaceholder;
- (void)displayDownloadOverlayForProgress:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

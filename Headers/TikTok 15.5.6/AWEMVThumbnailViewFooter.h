//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class UIView;
@protocol ACCLoadingViewProtocol;

@interface AWEMVThumbnailViewFooter : UICollectionReusableView
{
    UIView<ACCLoadingViewProtocol> *_loadMoreView;
}

@property(retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
- (void).cxx_destruct;
- (void)hideLoading;
- (void)showLoading;
- (id)initWithFrame:(struct CGRect)arg1;

@end

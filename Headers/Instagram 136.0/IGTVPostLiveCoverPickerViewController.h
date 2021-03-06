//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGTVGalleryViewControllerDelegate-Protocol.h>

@class IGTVCoverPickerSelection, IGTVCoverPickerView, IGTVCreationAnalyticsSession, IGUserSession, NSArray, NSMutableDictionary, NSString;
@protocol IGTVPostLiveCoverPickerViewControllerDelegate;

@interface IGTVPostLiveCoverPickerViewController : IGViewController <IGTVGalleryViewControllerDelegate>
{
    IGUserSession *_userSession;
    NSString *_broadcastID;
    NSString *_mediaID;
    IGTVCoverPickerView *_coverPickerView;
    IGTVCreationAnalyticsSession *_creationAnalytics;
    IGTVCoverPickerSelection *_selection;
    NSString *_userSelectedPostTitle;
    _Bool _showSeriesTag;
    NSArray *_thumbnailURLs;
    NSMutableDictionary *_fetchedImageCache;
    _Bool _initialImageFetchCompleted;
    id <IGTVPostLiveCoverPickerViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGTVPostLiveCoverPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleAllInitialImageFetchCompleted:(id)arg1;
- (void)_prepareThumbnailsIfReady;
- (id)_title;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)galleryViewController:(id)arg1 didSelectAsset:(id)arg2 withThumbnail:(id)arg3 fromView:(id)arg4;
- (void)galleryViewControllerDidTapClose:(id)arg1;
- (void)_configureWithUpdatedSelection:(id)arg1 fromScrubber:(_Bool)arg2;
- (void)_galleryButtonTapped;
- (void)_nextBarButtonItemTapped;
- (void)_backBarButtonItemTapped;
- (void)configureWithThumbnailURLs:(id)arg1;
- (void)configureWithUserSelectedPostTitle:(id)arg1 showSeriesTag:(_Bool)arg2;
- (void)_coverPhotoSelectionScrubberChanged;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 broadcastID:(id)arg2 mediaID:(id)arg3 thumbnailURLs:(id)arg4 creationAnalytics:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


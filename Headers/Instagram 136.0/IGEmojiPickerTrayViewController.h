//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGEmojiPickerSearchDataSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGEmojiPickerViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGPageViewControllerDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGPageViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryStickerTrayContainerViewDelegate-Protocol.h>

@class IGEmojiPickerDataSource, IGEmojiPickerSearchDataSource, IGEmojiPickerViewController, IGKeyboardObserver, IGPageViewController, IGStoryStickerTrayContainerView, IGUserSession, NSArray, NSString;
@protocol IGEmojiPickerTrayViewControllerDelegate;

@interface IGEmojiPickerTrayViewController : IGViewController <IGStoryStickerTrayContainerViewDelegate, IGEmojiPickerSearchDataSourceDelegate, IGEmojiPickerViewControllerDelegate, IGSearchBarDelegate, IGPageViewControllerDataSource, IGPageViewControllerDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    _Bool _dynamicColorsEnabled;
    IGPageViewController *_pageViewController;
    NSArray *_emojiPickerViewControllers;
    IGStoryStickerTrayContainerView *_trayContainerView;
    IGEmojiPickerViewController *_defaultPickerViewController;
    IGEmojiPickerViewController *_recentsPickerViewController;
    IGEmojiPickerViewController *_searchPickerViewController;
    IGEmojiPickerSearchDataSource *_searchDataSource;
    IGEmojiPickerDataSource *_dataSource;
    IGKeyboardObserver *_keyboardObserver;
    _Bool _isSearching;
    id <IGEmojiPickerTrayViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGEmojiPickerTrayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setSearching:(_Bool)arg1;
- (void)_searchCancelTapped:(id)arg1;
- (void)emojiPickerViewController:(id)arg1 didSelectEmoji:(id)arg2;
- (void)stickerSearchDataSource:(id)arg1 didLoadItems:(id)arg2 forText:(id)arg3;
- (void)_updateSearchingWithSearchBar:(id)arg1;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)stickerTrayContainerView:(id)arg1 didChangePageControl:(id)arg2;
- (void)stickerTrayContainerView:(id)arg1 didTapChevronButton:(id)arg2;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)pageViewController:(id)arg1 didChangeCurrentViewControllerToController:(id)arg2 atIndex:(long long)arg3;
- (id)pageViewController:(id)arg1 controllerForIndex:(long long)arg2;
- (long long)numberOfPagesForPageViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 dynamicColorsEnabled:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


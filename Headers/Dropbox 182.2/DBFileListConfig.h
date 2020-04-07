//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DBFileListConfig : NSObject
{
    _Bool _allowInfoSheet;
    _Bool _syncFileViewerSelectionInSplitView;
    _Bool _allowPeekPreview;
    _Bool _canLogViewAsRecentActivity;
    _Bool _allowsSwitchingLayoutStyle;
    _Bool _heroHeaderEnabled;
    _Bool _dragAndDropEnabled;
    _Bool _openFolderOverview;
    NSArray *_supportedLayoutStyles;
    unsigned long long _allowFadedThumbnailMask;
    unsigned long long _defaultLayoutStyle;
}

+ (id)configForRecentsListings;
+ (id)noActionOnItemsConfigForFolderChooser;
+ (id)configForFileTransferList;
+ (id)configForSharedLinkFileList;
+ (id)configForDevice;
@property(readonly, nonatomic) unsigned long long defaultLayoutStyle; // @synthesize defaultLayoutStyle=_defaultLayoutStyle;
@property(readonly, nonatomic) unsigned long long allowFadedThumbnailMask; // @synthesize allowFadedThumbnailMask=_allowFadedThumbnailMask;
@property(nonatomic) _Bool openFolderOverview; // @synthesize openFolderOverview=_openFolderOverview;
@property(readonly, nonatomic) _Bool dragAndDropEnabled; // @synthesize dragAndDropEnabled=_dragAndDropEnabled;
@property(readonly, nonatomic) _Bool heroHeaderEnabled; // @synthesize heroHeaderEnabled=_heroHeaderEnabled;
@property(readonly, nonatomic) _Bool allowsSwitchingLayoutStyle; // @synthesize allowsSwitchingLayoutStyle=_allowsSwitchingLayoutStyle;
@property(readonly, nonatomic) _Bool canLogViewAsRecentActivity; // @synthesize canLogViewAsRecentActivity=_canLogViewAsRecentActivity;
@property(readonly, nonatomic) _Bool allowPeekPreview; // @synthesize allowPeekPreview=_allowPeekPreview;
@property(readonly, nonatomic) _Bool syncFileViewerSelectionInSplitView; // @synthesize syncFileViewerSelectionInSplitView=_syncFileViewerSelectionInSplitView;
@property(readonly, nonatomic) _Bool allowInfoSheet; // @synthesize allowInfoSheet=_allowInfoSheet;
@property(readonly, nonatomic) NSArray *supportedLayoutStyles; // @synthesize supportedLayoutStyles=_supportedLayoutStyles;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isLayoutStyleSupported:(unsigned long long)arg1;
- (id)initWithAllowInfoSheet:(_Bool)arg1 allowPeekPreview:(_Bool)arg2 canLogViewAsRecentActivity:(_Bool)arg3 heroHeaderEnabled:(_Bool)arg4 dragAndDropEnabled:(_Bool)arg5 syncFileViewerSelectionInSplitView:(_Bool)arg6 allowFadedThumbnailMask:(unsigned long long)arg7;

@end

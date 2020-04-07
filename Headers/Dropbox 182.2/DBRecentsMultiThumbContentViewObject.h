//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBContainsRecentsTimeGroupedEntry-Protocol.h"
#import "DBContentViewObject-Protocol.h"
#import "DBDisplayablePath-Protocol.h"

@class DBDropboxPath, DBFileListThumbnailProvider, DBRecentsTimeGroupedEntry, NSString, UIImage, UIResponder;
@protocol DBContentView;

@interface DBRecentsMultiThumbContentViewObject : NSObject <DBContentViewObject, DBContainsRecentsTimeGroupedEntry, DBDisplayablePath>
{
    _Bool _shouldAutoSelectMultiEntryContentViews;
    UIResponder<DBContentView> *_contentView;
    DBDropboxPath *_displayPath;
    DBRecentsTimeGroupedEntry *_recentsTimeGroupedEntry;
    NSString *_rootDisplayName;
    DBFileListThumbnailProvider *_thumbnailProvider;
    CDUnknownBlockType _didTapOnEntry;
    CDUnknownBlockType _fetchEntryBlock;
}

@property(readonly, nonatomic) _Bool shouldAutoSelectMultiEntryContentViews; // @synthesize shouldAutoSelectMultiEntryContentViews=_shouldAutoSelectMultiEntryContentViews;
@property(copy, nonatomic) CDUnknownBlockType fetchEntryBlock; // @synthesize fetchEntryBlock=_fetchEntryBlock;
@property(copy, nonatomic) CDUnknownBlockType didTapOnEntry; // @synthesize didTapOnEntry=_didTapOnEntry;
@property(readonly, nonatomic) DBFileListThumbnailProvider *thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;
@property(readonly, nonatomic) NSString *rootDisplayName; // @synthesize rootDisplayName=_rootDisplayName;
@property(readonly, nonatomic) DBRecentsTimeGroupedEntry *recentsTimeGroupedEntry; // @synthesize recentsTimeGroupedEntry=_recentsTimeGroupedEntry;
@property(readonly, nonatomic) DBDropboxPath *displayPath; // @synthesize displayPath=_displayPath;
@property(nonatomic) __weak UIResponder<DBContentView> *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accessibilityHint;
@property(readonly, nonatomic) NSString *accessibilityValue;
@property(readonly, nonatomic) NSString *accessibilityLabel;
@property(readonly, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic) UIImage *iconImage;
- (_Bool)containsRecentsFileEntry:(id)arg1;
- (Class)defaultContentViewClass;
- (id)initWithModelObject:(id)arg1 modelContext:(id)arg2;
- (id)initWithRecentsTimeGroupedEntry:(id)arg1 modelContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

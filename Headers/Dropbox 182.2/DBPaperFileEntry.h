//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DBBaseFileEntryWithUserState.h"

@class DBPaperStarredTracker, NSString, NSURL, UIImage;

@interface DBPaperFileEntry : DBBaseFileEntryWithUserState
{
    NSString *_title;
    NSURL *_paperURL;
    NSString *_displayPath;
    NSString *_paperPathId;
    unsigned long long _paperEntryType;
    DBPaperStarredTracker *_starredTracker;
}

@property(retain, nonatomic) DBPaperStarredTracker *starredTracker; // @synthesize starredTracker=_starredTracker;
@property(nonatomic) unsigned long long paperEntryType; // @synthesize paperEntryType=_paperEntryType;
@property(readonly, copy, nonatomic) NSString *paperPathId; // @synthesize paperPathId=_paperPathId;
@property(readonly, copy, nonatomic) NSString *displayPath; // @synthesize displayPath=_displayPath;
@property(readonly, nonatomic) NSURL *paperURL; // @synthesize paperURL=_paperURL;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameFileEntryAs:(id)arg1;
@property(readonly, nonatomic) UIImage *thumbnailImage;
- (unsigned long long)itemSourceType;
- (unsigned long long)fileType;
- (id)filePath;
@property(readonly, copy, nonatomic) NSString *parentFolderName;
- (id)initWithPaperURL:(id)arg1 displayPath:(id)arg2 paperPathId:(id)arg3 entryType:(unsigned long long)arg4 title:(id)arg5 userState:(id)arg6;

@end

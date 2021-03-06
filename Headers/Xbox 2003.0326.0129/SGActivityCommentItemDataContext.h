//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XBXDataContext.h"

#import "SGProfileHeaderDataContext-Protocol.h"

@class NSString, XBXGamertag, XBXUser;

@interface SGActivityCommentItemDataContext : XBXDataContext <SGProfileHeaderDataContext>
{
    _Bool _isOnline;
    _Bool _shouldShowLike;
    _Bool _isLiked;
    NSString *_itemText;
    long long _authorType;
    NSString *_gamerPicUrl;
    XBXGamertag *_gamertag;
    NSString *_shortDescription;
    NSString *_realName;
    NSString *_dateString;
    NSString *_xuid;
    NSString *_path;
    NSString *_rootPath;
    long long _numLikes;
    XBXUser *_user;
}

@property(retain, nonatomic) XBXUser *user; // @synthesize user=_user;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) long long numLikes; // @synthesize numLikes=_numLikes;
@property(nonatomic) _Bool shouldShowLike; // @synthesize shouldShowLike=_shouldShowLike;
@property(retain, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
@property(retain, nonatomic) NSString *xuid; // @synthesize xuid=_xuid;
@property(retain, nonatomic) NSString *dateString; // @synthesize dateString=_dateString;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(retain, nonatomic) NSString *realName; // @synthesize realName=_realName;
@property(retain, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(retain, nonatomic) XBXGamertag *gamertag; // @synthesize gamertag=_gamertag;
@property(retain, nonatomic) NSString *gamerPicUrl; // @synthesize gamerPicUrl=_gamerPicUrl;
@property(nonatomic) long long authorType; // @synthesize authorType=_authorType;
@property(retain, nonatomic) NSString *itemText; // @synthesize itemText=_itemText;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


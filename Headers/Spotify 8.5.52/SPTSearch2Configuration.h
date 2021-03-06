//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString, NSURL;
@protocol SPTSearch2EmptyStatePropertiesProvider, SPTSearch2URLProviding;

@interface SPTSearch2Configuration : NSObject <NSCopying>
{
    _Bool _offlineSearchEnabled;
    _Bool _playRecentTracksEnabled;
    _Bool _loadingLoggingEnabled;
    _Bool _ubiLoggingEnabled;
    NSString *_recentsGroupID;
    NSString *_recentsCommandName;
    id <SPTSearch2URLProviding> _urlProvider;
    struct NSMutableDictionary *_customCommandHandlers;
    struct NSMutableDictionary *_customComponentNamespaces;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    NSString *_customPageIdentifer;
    NSURL *_customPageURI;
    NSString *_customReferrerIdentifier;
}

@property(copy, nonatomic) NSString *customReferrerIdentifier; // @synthesize customReferrerIdentifier=_customReferrerIdentifier;
@property(copy, nonatomic) NSURL *customPageURI; // @synthesize customPageURI=_customPageURI;
@property(copy, nonatomic) NSString *customPageIdentifer; // @synthesize customPageIdentifer=_customPageIdentifer;
@property(nonatomic) _Bool ubiLoggingEnabled; // @synthesize ubiLoggingEnabled=_ubiLoggingEnabled;
@property(nonatomic) _Bool loadingLoggingEnabled; // @synthesize loadingLoggingEnabled=_loadingLoggingEnabled;
@property(nonatomic) _Bool playRecentTracksEnabled; // @synthesize playRecentTracksEnabled=_playRecentTracksEnabled;
@property(nonatomic) _Bool offlineSearchEnabled; // @synthesize offlineSearchEnabled=_offlineSearchEnabled;
@property(retain, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(readonly, nonatomic) NSMutableDictionary *customComponentNamespaces; // @synthesize customComponentNamespaces=_customComponentNamespaces;
@property(readonly, nonatomic) NSMutableDictionary *customCommandHandlers; // @synthesize customCommandHandlers=_customCommandHandlers;
@property(retain, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
@property(copy, nonatomic) NSString *recentsCommandName; // @synthesize recentsCommandName=_recentsCommandName;
@property(copy, nonatomic) NSString *recentsGroupID; // @synthesize recentsGroupID=_recentsGroupID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLProvider:(id)arg1 recentsGroupID:(id)arg2 emptyStatePropertiesProvider:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURLComponents;

@interface AWEUrlParam : NSObject
{
    NSString *_originUrl;
    NSString *_path;
    NSArray *_pathComponents;
    NSDictionary *_queryItems;
    NSURLComponents *_urlComponents;
    NSString *_scheme;
    NSString *_itemId;
    NSDictionary *_userInfo;
}

+ (id)objectFromUrl:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(retain, nonatomic) NSURLComponents *urlComponents; // @synthesize urlComponents=_urlComponents;
@property(copy, nonatomic) NSDictionary *queryItems; // @synthesize queryItems=_queryItems;
@property(copy, nonatomic) NSArray *pathComponents; // @synthesize pathComponents=_pathComponents;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
- (void).cxx_destruct;
- (_Bool)pathContainsPattern:(id)arg1;
- (_Bool)isOpenUrlKindOfNewVideoPush;
- (id)parseReferStr;
@property(readonly, nonatomic) NSString *absoluteUrlString;
- (void)removeQueryItemsForKey:(id)arg1;
- (void)addQueryValue:(id)arg1 forKey:(id)arg2;
- (void)addQueryItems:(id)arg1;
- (void)changeScheme:(id)arg1;
- (id)initWithUrl:(id)arg1 userInfo:(id)arg2;
- (id)initWithUrl:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch13DiscoveryPath : NSObject
{
    // Error parsing type: , name: parent
    // Error parsing type: , name: name
    // Error parsing type: , name: pathComponentSeparator
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithParent:(id)arg1 name:(id)arg2 pathComponentSeparator:(id)arg3;
- (id)initFromURL:(id)arg1;
- (id)appendingDiscoveryPath:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) NSString *pathComponentSeparator;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) _TtC6Twitch13DiscoveryPath *parent; // @synthesize parent;

@end


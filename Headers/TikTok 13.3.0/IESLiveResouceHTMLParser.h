//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESLiveResouceHTMLParser : NSObject
{
    struct _xmlDoc *_docPtr;
}

+ (id)sharedInstance;
- (void)parseSpanStyle:(id)arg1 toAttribute:(id)arg2;
- (void)parseStrikeStyle:(id)arg1 toAttribute:(id)arg2;
- (void)parseNode:(struct _xmlNode *)arg1 toAttribute:(id)arg2;
- (id)parseRoot:(struct _xmlNode *)arg1 withAttribute:(id)arg2;
- (id)parseHTMLWithString:(id)arg1 error:(id *)arg2;
- (id)init;

@end

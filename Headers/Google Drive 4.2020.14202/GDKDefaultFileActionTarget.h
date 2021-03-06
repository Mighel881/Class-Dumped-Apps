//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKFileActionTarget-Protocol.h"

@protocol GDKFile;

@interface GDKDefaultFileActionTarget : NSObject <GDKFileActionTarget>
{
    id <GDKFile> _file;
    id <GDKFile> _folder;
}

@property(retain, nonatomic) id <GDKFile> folder; // @synthesize folder=_folder;
@property(retain, nonatomic) id <GDKFile> file; // @synthesize file=_file;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFile:(id)arg1 inFolder:(id)arg2;

@end


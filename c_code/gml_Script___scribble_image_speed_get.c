// gml_Script___scribble_image_speed_get @ 0x1401f2760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script___scribble_image_speed_get
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  byte bVar1;
  uint uVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  double dVar6;
  undefined8 *puVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  undefined8 local_108;
  undefined4 uStack_100;
  int iStack_fc;
  double local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  double local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  double *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  
  local_70 = "gml_Script___scribble_buffer_peek_unicode";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0xa0;
  uVar9 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  iStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_68 = 0xa2;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1401f2831:
    local_108 = (double)*puVar5;
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    iStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_a8) goto LAB_1401f2831;
  }
  local_50 = &local_a8;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1401f287d:
    local_108 = (double)*puVar5;
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    iStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_108);
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 != &local_98) goto LAB_1401f287d;
  }
  local_48 = &local_98;
  local_108 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
  uStack_100 = uRam00000001419e3568;
  iStack_fc = iRam00000001419e356c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_40 = local_88;
  uVar4 = CONCAT44(uVar9,DAT_141a0a178);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_d8,3,uVar4,&local_50);
  uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pdVar3 != &local_f8) {
    local_108 = *pdVar3;
    uStack_100 = *(undefined4 *)(pdVar3 + 1);
    iStack_fc = *(int *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_108);
  }
  local_68 = 0xa4;
  bVar1 = FUN_140e4a8b0(&local_f8);
  if ((bVar1 & 0xe0) == 0xc0) {
    local_68 = 0xa6;
    uVar2 = FUN_140e4a8b0(&local_f8);
    dVar6 = (double)((ulonglong)(uVar2 & 0x1f) << 6);
    if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    iStack_ec = 10;
    local_68 = 0xa7;
    local_f8 = dVar6;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (param_4 < 1) {
      pdVar3 = (double *)&DAT_1419df7b0;
LAB_1401f29f1:
      local_108 = *pdVar3;
      uStack_100 = *(undefined4 *)(pdVar3 + 1);
      iStack_fc = *(int *)((longlong)pdVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_108);
    }
    else {
      pdVar3 = (double *)*param_5;
      if (pdVar3 != &local_c8) goto LAB_1401f29f1;
    }
    local_60 = &local_c8;
    if (1 < param_4) {
      puVar7 = (undefined8 *)param_5[1];
    }
    uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_e8,puVar7);
    }
    iStack_fc = 7;
    local_108 = (double)CONCAT44(local_108._4_4_,1);
    FUN_1400460e0(&local_e8,&local_108);
    if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = (double)local_e8;
    uStack_100 = uStack_e0;
    iStack_fc = uStack_dc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_58 = local_b8;
    local_108 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
    uStack_100 = uRam00000001419e3568;
    iStack_fc = iRam00000001419e356c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
    local_50 = &local_a8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar9,DAT_141a0a178),&local_60);
    uVar2 = FUN_140e4a8b0(uVar4);
    uVar2 = uVar2 & 0x3f;
    dVar6 = (double)(ulonglong)uVar2;
    if (iStack_ec != 0) {
      if (iStack_ec == 1) {
LAB_1401f38d2:
        FUN_140e632c0("unable to add a number to string");
        goto LAB_1401f3808;
      }
      if (iStack_ec == 7) {
LAB_1401f38c9:
        local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + uVar2);
        goto LAB_1401f3808;
      }
      if (iStack_ec != 10) {
        if (iStack_ec != 0xd) {
          iStack_fc = 10;
          local_108 = dVar6;
          FUN_140042910(&DAT_14172c404,&local_f8,&local_108);
          if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          goto LAB_1401f3808;
        }
        goto LAB_1401f37e8;
      }
      goto LAB_1401f38bf;
    }
  }
  else {
    local_68 = 0xa9;
    bVar1 = FUN_140e4a8b0(&local_f8);
    if ((bVar1 & 0xf0) != 0xe0) {
      local_68 = 0xaf;
      bVar1 = FUN_140e4a8b0(&local_f8);
      if ((bVar1 & 0xf8) != 0xf0) goto LAB_1401f3808;
      local_68 = 0xb1;
      uVar2 = FUN_140e4a8b0(&local_f8);
      dVar6 = (double)((ulonglong)(uVar2 & 7) << 0x12);
      if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      iStack_ec = 10;
      local_68 = 0xb2;
      local_f8 = dVar6;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      if (param_4 < 1) {
        pdVar3 = (double *)&DAT_1419df7b0;
LAB_1401f314b:
        local_108 = *pdVar3;
        uStack_100 = *(undefined4 *)(pdVar3 + 1);
        iStack_fc = *(int *)((longlong)pdVar3 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_108);
      }
      else {
        pdVar3 = (double *)*param_5;
        if (pdVar3 != &local_c8) goto LAB_1401f314b;
      }
      local_60 = &local_c8;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_e0 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
        local_e8 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_e8);
      }
      iStack_fc = 7;
      local_108 = (double)CONCAT44(local_108._4_4_,1);
      FUN_1400460e0(&local_e8,&local_108);
      if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = (double)local_e8;
      uStack_100 = uStack_e0;
      iStack_fc = uStack_dc;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_108);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_58 = local_b8;
      local_108 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_100 = uRam00000001419e3568;
      iStack_fc = iRam00000001419e356c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_108);
      local_50 = &local_a8;
      uVar8 = CONCAT44(uVar9,DAT_141a0a178);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,3,uVar8,&local_60);
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar2 = FUN_140e4a8b0(uVar4);
      dVar6 = (double)((ulonglong)(uVar2 & 0x3f) * 0x1000);
      if (iStack_ec == 0) {
LAB_1401f3332:
        local_f8 = local_f8 + (double)(longlong)dVar6;
      }
      else if (iStack_ec == 1) {
        FUN_140e632c0("unable to add a number to string");
      }
      else if (iStack_ec == 7) {
        local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + SUB84(dVar6,0));
      }
      else if (iStack_ec == 10) {
        local_f8 = (double)((longlong)local_f8 + (longlong)dVar6);
      }
      else {
        if (iStack_ec == 0xd) {
          iStack_ec = 0;
          goto LAB_1401f3332;
        }
        iStack_fc = 10;
        local_108 = dVar6;
        FUN_140042910(&DAT_14172c404,&local_f8,&local_108);
        if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
      }
      local_68 = 0xb3;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      if (param_4 < 1) {
        pdVar3 = (double *)&DAT_1419df7b0;
LAB_1401f33ab:
        local_108 = *pdVar3;
        uStack_100 = *(undefined4 *)(pdVar3 + 1);
        iStack_fc = *(int *)((longlong)pdVar3 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_108);
      }
      else {
        pdVar3 = (double *)*param_5;
        if (pdVar3 != &local_c8) goto LAB_1401f33ab;
      }
      local_60 = &local_c8;
      if (param_4 < 2) {
        puVar5 = &DAT_1419df7b0;
      }
      else {
        puVar5 = (undefined8 *)param_5[1];
      }
      uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
      uStack_e0 = *(undefined4 *)(puVar5 + 1);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
        local_e8 = *puVar5;
      }
      else {
        FUN_1400419b0(&local_e8);
      }
      iStack_fc = 7;
      local_108 = (double)CONCAT44(local_108._4_4_,2);
      FUN_1400460e0(&local_e8,&local_108);
      if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = (double)local_e8;
      uStack_100 = uStack_e0;
      iStack_fc = uStack_dc;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_108);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_58 = local_b8;
      local_108 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_100 = uRam00000001419e3568;
      iStack_fc = iRam00000001419e356c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_108);
      local_50 = &local_a8;
      uVar8 = CONCAT44(uVar9,DAT_141a0a178);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,3,uVar8,&local_60);
      uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
      uVar2 = FUN_140e4a8b0(uVar4);
      dVar6 = (double)((ulonglong)(uVar2 & 0x3f) * 0x40);
      if (iStack_ec == 0) {
LAB_1401f3597:
        local_f8 = local_f8 + (double)(longlong)dVar6;
      }
      else if (iStack_ec == 1) {
        FUN_140e632c0("unable to add a number to string");
      }
      else if (iStack_ec == 7) {
        local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + SUB84(dVar6,0));
      }
      else if (iStack_ec == 10) {
        local_f8 = (double)((longlong)local_f8 + (longlong)dVar6);
      }
      else {
        if (iStack_ec == 0xd) {
          iStack_ec = 0;
          goto LAB_1401f3597;
        }
        iStack_fc = 10;
        local_108 = dVar6;
        FUN_140042910(&DAT_14172c404,&local_f8,&local_108);
        if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
      }
      local_68 = 0xb4;
      if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      local_d8 = 0;
      local_d0 = 0;
      local_cc = 5;
      if (param_4 < 1) {
        pdVar3 = (double *)&DAT_1419df7b0;
LAB_1401f3610:
        local_108 = *pdVar3;
        uStack_100 = *(undefined4 *)(pdVar3 + 1);
        iStack_fc = *(int *)((longlong)pdVar3 + 0xc);
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_108);
      }
      else {
        pdVar3 = (double *)*param_5;
        if (pdVar3 != &local_c8) goto LAB_1401f3610;
      }
      local_60 = &local_c8;
      if (1 < param_4) {
        puVar7 = (undefined8 *)param_5[1];
      }
      uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
      uStack_e0 = *(undefined4 *)(puVar7 + 1);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
        local_e8 = *puVar7;
      }
      else {
        FUN_1400419b0(&local_e8,puVar7);
      }
      iStack_fc = 7;
      local_108 = (double)CONCAT44(local_108._4_4_,3);
      FUN_1400460e0(&local_e8,&local_108);
      if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = (double)local_e8;
      uStack_100 = uStack_e0;
      iStack_fc = uStack_dc;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_108);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      local_58 = local_b8;
      local_108 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_100 = uRam00000001419e3568;
      iStack_fc = iRam00000001419e356c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_108);
      local_50 = &local_a8;
      uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar9,DAT_141a0a178),&local_60);
      uVar2 = FUN_140e4a8b0(uVar4);
      uVar2 = uVar2 & 0x3f;
      dVar6 = (double)(ulonglong)uVar2;
      if (iStack_ec == 0) goto LAB_1401f37f0;
      if (iStack_ec == 1) goto LAB_1401f38d2;
      if (iStack_ec == 7) goto LAB_1401f38c9;
      if (iStack_ec != 10) {
        if (iStack_ec != 0xd) {
          iStack_fc = 10;
          local_108 = dVar6;
          FUN_140042910(&DAT_14172c404,&local_f8,&local_108);
          if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          goto LAB_1401f3808;
        }
        goto LAB_1401f37e8;
      }
LAB_1401f38bf:
      local_f8 = (double)((longlong)local_f8 + (longlong)dVar6);
      goto LAB_1401f3808;
    }
    local_68 = 0xab;
    uVar2 = FUN_140e4a8b0(&local_f8);
    dVar6 = (double)((ulonglong)(uVar2 & 0xf) << 0xc);
    if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    iStack_ec = 10;
    local_68 = 0xac;
    local_f8 = dVar6;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (param_4 < 1) {
      pdVar3 = (double *)&DAT_1419df7b0;
LAB_1401f2c6a:
      local_108 = *pdVar3;
      uStack_100 = *(undefined4 *)(pdVar3 + 1);
      iStack_fc = *(int *)((longlong)pdVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_108);
    }
    else {
      pdVar3 = (double *)*param_5;
      if (pdVar3 != &local_c8) goto LAB_1401f2c6a;
    }
    local_60 = &local_c8;
    if (param_4 < 2) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)param_5[1];
    }
    uStack_dc = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_e8);
    }
    iStack_fc = 7;
    local_108 = (double)CONCAT44(local_108._4_4_,1);
    FUN_1400460e0(&local_e8,&local_108);
    if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = (double)local_e8;
    uStack_100 = uStack_e0;
    iStack_fc = uStack_dc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_58 = local_b8;
    local_108 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
    uStack_100 = uRam00000001419e3568;
    iStack_fc = iRam00000001419e356c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
    local_50 = &local_a8;
    uVar8 = CONCAT44(uVar9,DAT_141a0a178);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,3,uVar8,&local_60);
    uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar2 = FUN_140e4a8b0(uVar4);
    dVar6 = (double)((ulonglong)(uVar2 & 0x3f) * 0x40);
    if (iStack_ec == 0) {
LAB_1401f2e51:
      local_f8 = local_f8 + (double)(longlong)dVar6;
    }
    else if (iStack_ec == 1) {
      FUN_140e632c0("unable to add a number to string");
    }
    else if (iStack_ec == 7) {
      local_f8 = (double)CONCAT44(local_f8._4_4_,local_f8._0_4_ + SUB84(dVar6,0));
    }
    else if (iStack_ec == 10) {
      local_f8 = (double)((longlong)local_f8 + (longlong)dVar6);
    }
    else {
      if (iStack_ec == 0xd) {
        iStack_ec = 0;
        goto LAB_1401f2e51;
      }
      iStack_fc = 10;
      local_108 = dVar6;
      FUN_140042910(&DAT_14172c404,&local_f8,&local_108);
      if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
    }
    local_68 = 0xad;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    local_d8 = 0;
    local_d0 = 0;
    local_cc = 5;
    if (param_4 < 1) {
      pdVar3 = (double *)&DAT_1419df7b0;
LAB_1401f2eca:
      local_108 = *pdVar3;
      uStack_100 = *(undefined4 *)(pdVar3 + 1);
      iStack_fc = *(int *)((longlong)pdVar3 + 0xc);
      if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      FUN_140041b80(&local_c8,&local_108);
    }
    else {
      pdVar3 = (double *)*param_5;
      if (pdVar3 != &local_c8) goto LAB_1401f2eca;
    }
    local_60 = &local_c8;
    if (1 < param_4) {
      puVar7 = (undefined8 *)param_5[1];
    }
    uStack_dc = *(undefined4 *)((longlong)puVar7 + 0xc);
    uStack_e0 = *(undefined4 *)(puVar7 + 1);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar7;
    }
    else {
      FUN_1400419b0(&local_e8,puVar7);
    }
    iStack_fc = 7;
    local_108 = (double)CONCAT44(local_108._4_4_,2);
    FUN_1400460e0(&local_e8,&local_108);
    if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = (double)local_e8;
    uStack_100 = uStack_e0;
    iStack_fc = uStack_dc;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
    if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_58 = local_b8;
    local_108 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
    uStack_100 = uRam00000001419e3568;
    iStack_fc = iRam00000001419e356c;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_108);
    local_50 = &local_a8;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_d8,3,CONCAT44(uVar9,DAT_141a0a178),&local_60);
    uVar2 = FUN_140e4a8b0(uVar4);
    uVar2 = uVar2 & 0x3f;
    dVar6 = (double)(ulonglong)uVar2;
    if (iStack_ec != 0) {
      if (iStack_ec == 1) goto LAB_1401f38d2;
      if (iStack_ec == 7) goto LAB_1401f38c9;
      if (iStack_ec == 10) goto LAB_1401f38bf;
      if (iStack_ec != 0xd) {
        iStack_fc = 10;
        local_108 = dVar6;
        FUN_140042910(&DAT_14172c404,&local_f8,&local_108);
        if ((1 << ((byte)iStack_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        goto LAB_1401f3808;
      }
LAB_1401f37e8:
      iStack_ec = 0;
    }
  }
LAB_1401f37f0:
  local_f8 = local_f8 + (double)(longlong)dVar6;
LAB_1401f3808:
  local_68 = 0xb7;
  if (&local_f8 != param_3) {
    local_108 = local_f8;
    uStack_100 = uStack_f0;
    iStack_fc = iStack_ec;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_108);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)iStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


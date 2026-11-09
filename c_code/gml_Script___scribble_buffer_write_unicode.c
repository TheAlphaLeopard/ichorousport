// gml_Script___scribble_buffer_write_unicode @ 0x1401f1b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * gml_Script___scribble_buffer_write_unicode
                   (undefined8 param_1,undefined8 param_2,double *param_3,int param_4,
                   undefined8 *param_5)

{
  byte bVar1;
  uint uVar2;
  double *pdVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  double dVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  double local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  char *local_38;
  undefined4 local_30;
  
  local_38 = "gml_Script___scribble_buffer_read_unicode";
  local_40 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_40;
  local_30 = 0x86;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  iStack_ac = 0xffffff;
  local_b8 = 0.0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0.0;
  local_30 = 0x88;
  puVar7 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1401f1c43:
    local_a8 = (double)*puVar5;
    uStack_a0 = *(undefined4 *)(puVar5 + 1);
    iStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_a8);
  }
  else {
    puVar5 = (undefined8 *)*param_5;
    if (puVar5 != &local_78) goto LAB_1401f1c43;
  }
  local_50 = &local_78;
  local_a8 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
  uStack_a0 = uRam00000001419e3568;
  iStack_9c = iRam00000001419e356c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_a8);
  local_48 = local_68;
  uVar4 = CONCAT44(uVar10,DAT_141a04da8);
  pdVar3 = (double *)FUN_140e634e0(param_1,param_2,&local_98,2,uVar4,&local_50);
  uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (pdVar3 != &local_b8) {
    local_a8 = *pdVar3;
    uStack_a0 = *(undefined4 *)(pdVar3 + 1);
    iStack_9c = *(int *)((longlong)pdVar3 + 0xc);
    if ((1 << ((byte)iStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_a8);
  }
  local_30 = 0x8a;
  bVar1 = FUN_140e4a8b0(&local_b8);
  if ((bVar1 & 0xe0) == 0xc0) {
    local_30 = 0x8c;
    uVar2 = FUN_140e4a8b0(&local_b8);
    dVar8 = (double)((ulonglong)(uVar2 & 0x1f) << 6);
    if ((1 << ((byte)iStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    iStack_ac = 10;
    local_30 = 0x8d;
    local_b8 = dVar8;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    if ((param_4 < 1) || (puVar7 = (undefined8 *)*param_5, puVar7 != &local_88)) {
      local_a8 = (double)*puVar7;
      uStack_a0 = *(undefined4 *)(puVar7 + 1);
      iStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_a8);
    }
    local_58 = &local_88;
    local_a8 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
    uStack_a0 = uRam00000001419e3568;
    iStack_9c = iRam00000001419e356c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    FUN_140041b80(&local_78,&local_a8);
    local_50 = &local_78;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar10,DAT_141a04da8),&local_58);
    uVar2 = FUN_140e4a8b0(uVar4);
    uVar2 = uVar2 & 0x3f;
    dVar8 = (double)(ulonglong)uVar2;
    if (iStack_ac != 0) {
      if (iStack_ac != 1) {
        if (iStack_ac != 7) {
          if (iStack_ac != 10) {
            if (iStack_ac != 0xd) {
              iStack_9c = 10;
              local_a8 = dVar8;
              FUN_140042910(&DAT_14172c404,&local_b8,&local_a8);
              if ((1 << ((byte)iStack_9c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_a8);
              }
              goto LAB_1401f2680;
            }
            goto LAB_1401f2663;
          }
LAB_1401f2736:
          local_b8 = (double)((longlong)local_b8 + (longlong)dVar8);
          goto LAB_1401f2680;
        }
LAB_1401f273f:
        local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + uVar2);
        goto LAB_1401f2680;
      }
LAB_1401f2747:
      FUN_140e632c0("unable to add a number to string");
      goto LAB_1401f2680;
    }
  }
  else {
    local_30 = 0x8f;
    bVar1 = FUN_140e4a8b0(&local_b8);
    if ((bVar1 & 0xf0) == 0xe0) {
      local_30 = 0x91;
      uVar2 = FUN_140e4a8b0(&local_b8);
      dVar8 = (double)((ulonglong)(uVar2 & 0xf) << 0xc);
      if ((1 << ((byte)iStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      iStack_ac = 10;
      local_30 = 0x92;
      local_b8 = dVar8;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
LAB_1401f1f3f:
        local_a8 = (double)*puVar5;
        uStack_a0 = *(undefined4 *)(puVar5 + 1);
        iStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_a8);
      }
      else {
        puVar5 = (undefined8 *)*param_5;
        if (puVar5 != &local_88) goto LAB_1401f1f3f;
      }
      local_58 = &local_88;
      local_a8 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_a0 = uRam00000001419e3568;
      iStack_9c = iRam00000001419e356c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
      local_50 = &local_78;
      uVar9 = CONCAT44(uVar10,DAT_141a04da8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_98,2,uVar9,&local_58);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar2 = FUN_140e4a8b0(uVar4);
      lVar6 = (ulonglong)(uVar2 & 0x3f) * 0x40;
      if (iStack_ac == 0) {
LAB_1401f204b:
        local_b8 = local_b8 + (double)lVar6;
      }
      else if (iStack_ac == 1) {
        FUN_140e632c0("unable to add a number to string");
      }
      else if (iStack_ac == 7) {
        local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + (int)lVar6);
      }
      else if (iStack_ac == 10) {
        local_b8 = (double)((longlong)local_b8 + lVar6);
      }
      else {
        if (iStack_ac == 0xd) {
          iStack_ac = 0;
          goto LAB_1401f204b;
        }
        iStack_9c = 10;
        local_a8 = (double)lVar6;
        FUN_140042910(&DAT_14172c404,&local_b8,&local_a8);
        if ((1 << ((byte)iStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
      }
      local_30 = 0x93;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      if ((param_4 < 1) || (puVar7 = (undefined8 *)*param_5, puVar7 != &local_88)) {
        local_a8 = (double)*puVar7;
        uStack_a0 = *(undefined4 *)(puVar7 + 1);
        iStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_a8);
      }
      local_58 = &local_88;
      local_a8 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_a0 = uRam00000001419e3568;
      iStack_9c = iRam00000001419e356c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
      local_50 = &local_78;
      uVar4 = FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar10,DAT_141a04da8),&local_58);
      uVar2 = FUN_140e4a8b0(uVar4);
      uVar2 = uVar2 & 0x3f;
      dVar8 = (double)(ulonglong)uVar2;
      if (iStack_ac == 0) goto LAB_1401f266a;
      if (iStack_ac == 1) goto LAB_1401f2747;
      if (iStack_ac == 7) goto LAB_1401f273f;
      if (iStack_ac == 10) goto LAB_1401f2736;
      if (iStack_ac != 0xd) {
        iStack_9c = 10;
        local_a8 = dVar8;
        FUN_140042910(&DAT_14172c404,&local_b8,&local_a8);
        if ((1 << ((byte)iStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        goto LAB_1401f2680;
      }
    }
    else {
      local_30 = 0x95;
      bVar1 = FUN_140e4a8b0(&local_b8);
      if ((bVar1 & 0xf8) != 0xf0) goto LAB_1401f2680;
      local_30 = 0x97;
      uVar2 = FUN_140e4a8b0(&local_b8);
      dVar8 = (double)((ulonglong)(uVar2 & 7) << 0x12);
      if ((1 << ((byte)iStack_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      iStack_ac = 10;
      local_30 = 0x98;
      local_b8 = dVar8;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
LAB_1401f2262:
        local_a8 = (double)*puVar5;
        uStack_a0 = *(undefined4 *)(puVar5 + 1);
        iStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_a8);
      }
      else {
        puVar5 = (undefined8 *)*param_5;
        if (puVar5 != &local_88) goto LAB_1401f2262;
      }
      local_58 = &local_88;
      local_a8 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_a0 = uRam00000001419e3568;
      iStack_9c = iRam00000001419e356c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
      local_50 = &local_78;
      uVar9 = CONCAT44(uVar10,DAT_141a04da8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_98,2,uVar9,&local_58);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar2 = FUN_140e4a8b0(uVar4);
      lVar6 = (ulonglong)(uVar2 & 0x3f) * 0x1000;
      if (iStack_ac == 0) {
LAB_1401f236e:
        local_b8 = local_b8 + (double)lVar6;
      }
      else if (iStack_ac == 1) {
        FUN_140e632c0("unable to add a number to string");
      }
      else if (iStack_ac == 7) {
        local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + (int)lVar6);
      }
      else if (iStack_ac == 10) {
        local_b8 = (double)((longlong)local_b8 + lVar6);
      }
      else {
        if (iStack_ac == 0xd) {
          iStack_ac = 0;
          goto LAB_1401f236e;
        }
        iStack_9c = 10;
        local_a8 = (double)lVar6;
        FUN_140042910(&DAT_14172c404,&local_b8,&local_a8);
        if ((1 << ((byte)iStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
      }
      local_30 = 0x99;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      if (param_4 < 1) {
        puVar5 = &DAT_1419df7b0;
LAB_1401f23e1:
        local_a8 = (double)*puVar5;
        uStack_a0 = *(undefined4 *)(puVar5 + 1);
        iStack_9c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_a8);
      }
      else {
        puVar5 = (undefined8 *)*param_5;
        if (puVar5 != &local_88) goto LAB_1401f23e1;
      }
      local_58 = &local_88;
      local_a8 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_a0 = uRam00000001419e3568;
      iStack_9c = iRam00000001419e356c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
      local_50 = &local_78;
      uVar9 = CONCAT44(uVar10,DAT_141a04da8);
      uVar4 = FUN_140e634e0(param_1,param_2,&local_98,2,uVar9,&local_58);
      uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
      uVar2 = FUN_140e4a8b0(uVar4);
      lVar6 = (ulonglong)(uVar2 & 0x3f) * 0x40;
      if (iStack_ac == 0) {
LAB_1401f24ea:
        local_b8 = local_b8 + (double)lVar6;
      }
      else if (iStack_ac == 1) {
        FUN_140e632c0("unable to add a number to string");
      }
      else if (iStack_ac == 7) {
        local_b8 = (double)CONCAT44(local_b8._4_4_,local_b8._0_4_ + (int)lVar6);
      }
      else if (iStack_ac == 10) {
        local_b8 = (double)((longlong)local_b8 + lVar6);
      }
      else {
        if (iStack_ac == 0xd) {
          iStack_ac = 0;
          goto LAB_1401f24ea;
        }
        iStack_9c = 10;
        local_a8 = (double)lVar6;
        FUN_140042910(&DAT_14172c404,&local_b8,&local_a8);
        if ((1 << ((byte)iStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
      }
      local_30 = 0x9a;
      if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      local_98 = 0;
      local_90 = 0;
      local_8c = 5;
      if ((param_4 < 1) || (puVar7 = (undefined8 *)*param_5, puVar7 != &local_88)) {
        local_a8 = (double)*puVar7;
        uStack_a0 = *(undefined4 *)(puVar7 + 1);
        iStack_9c = *(undefined4 *)((longlong)puVar7 + 0xc);
        if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_a8);
      }
      local_58 = &local_88;
      local_a8 = (double)CONCAT44(uRam00000001419e3564,_DAT_1419e3560);
      uStack_a0 = uRam00000001419e3568;
      iStack_9c = iRam00000001419e356c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_78);
      }
      FUN_140041b80(&local_78,&local_a8);
      local_50 = &local_78;
      uVar4 = FUN_140e634e0(param_1,param_2,&local_98,2,CONCAT44(uVar10,DAT_141a04da8),&local_58);
      uVar2 = FUN_140e4a8b0(uVar4);
      uVar2 = uVar2 & 0x3f;
      dVar8 = (double)(ulonglong)uVar2;
      if (iStack_ac == 0) goto LAB_1401f266a;
      if (iStack_ac == 1) goto LAB_1401f2747;
      if (iStack_ac == 7) goto LAB_1401f273f;
      if (iStack_ac == 10) goto LAB_1401f2736;
      if (iStack_ac != 0xd) {
        iStack_9c = 10;
        local_a8 = dVar8;
        FUN_140042910(&DAT_14172c404,&local_b8,&local_a8);
        if ((1 << ((byte)iStack_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        goto LAB_1401f2680;
      }
    }
LAB_1401f2663:
    iStack_ac = 0;
  }
LAB_1401f266a:
  local_b8 = local_b8 + (double)(longlong)dVar8;
LAB_1401f2680:
  local_30 = 0x9d;
  if (&local_b8 != param_3) {
    local_a8 = local_b8;
    uStack_a0 = uStack_b0;
    iStack_9c = iStack_ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)iStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_40;
  return param_3;
}


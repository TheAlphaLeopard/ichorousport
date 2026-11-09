// gml_Script___scribble_buffer_peek_unicode @ 0x1401f15a0

longlong *
gml_Script___scribble_buffer_peek_unicode
          (undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint local_res20;
  double local_158;
  uint local_14c;
  longlong local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined4 local_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  longlong local_110;
  uint uStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_c8 [32];
  longlong local_a8;
  byte local_9c;
  longlong local_98;
  byte local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_68;
  longlong *local_60;
  
  local_120 = "gml_Script___scribble_asset_is_krutidev";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x78;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_res20 = 0xffffff;
  uStack_104 = 0xffffff;
  lVar6 = 0;
  local_110 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_d4 = 0;
  local_e0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x7a;
  plVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    plVar3 = &DAT_1419df7b0;
  }
  else {
    plVar3 = (longlong *)*param_5;
    if (plVar3 == &local_a8) goto LAB_1401f16cc;
  }
  local_148 = *plVar3;
  uStack_140 = (undefined4)plVar3[1];
  uStack_13c = *(undefined4 *)((longlong)plVar3 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_148);
LAB_1401f16cc:
  local_68 = &local_a8;
  if ((param_4 < 2) || (plVar4 = (longlong *)param_5[1], plVar4 != &local_98)) {
    local_148 = *plVar4;
    uStack_140 = (undefined4)plVar4[1];
    uStack_13c = *(undefined4 *)((longlong)plVar4 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_148);
  }
  local_60 = &local_98;
  plVar4 = (longlong *)FUN_140e634e0(param_1,param_2,&local_e0,2,DAT_141a085d8,&local_68);
  if (plVar4 == &local_110) {
  }
  else {
    local_148 = *plVar4;
    uStack_140 = (undefined4)plVar4[1];
    uStack_13c = *(undefined4 *)((longlong)plVar4 + 0xc);
    FUN_140041b80(&local_110,&local_148);
    lVar6 = local_110;
    local_res20 = uStack_104;
  }
  local_118 = 0x7b;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0.0;
  iVar5 = 0;
  if ((local_res20 == 2) && (lVar6 != 0)) {
    iVar5 = *(int *)(lVar6 + 0x24);
  }
  if (0 < iVar5) {
    uVar7 = 0x3ff00000;
    do {
      iVar5 = iVar5 + -1;
      local_118 = 0x7e;
      iVar1 = FUN_140e4a740(&local_158);
      plVar4 = (longlong *)0x0;
      if (((local_res20 & 0xffffff) == 2) && (lVar6 != 0)) {
        if ((iVar1 < 0) || (*(int *)(lVar6 + 0x24) <= iVar1)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                        *(undefined4 *)(lVar6 + 0x24));
        }
        else {
          plVar4 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar6 + 8));
        }
        if (plVar4 != &local_138) goto LAB_1401f1848;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar4 = &local_110;
LAB_1401f1848:
        local_88 = (undefined4)*plVar4;
        uStack_84 = *(undefined4 *)((longlong)plVar4 + 4);
        uStack_80 = (undefined4)plVar4[1];
        uStack_7c = *(undefined4 *)((longlong)plVar4 + 0xc);
        if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        FUN_140041b80(&local_138,&local_88);
      }
      local_118 = 0x7f;
      local_f4 = DAT_141dcd7d4;
      local_f8 = DAT_141dcd7d0;
      if ((1 << ((byte)DAT_141dcd7d4 & 0x1f) & 0x46U) == 0) {
        local_100 = DAT_141dcd7c8;
      }
      else {
        FUN_1400419b0(&local_100,&DAT_141dcd7c8);
      }
      iVar1 = FUN_140e851f0(&local_138,&local_100,DAT_141955260,0);
      if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_100);
      }
      if (iVar1 == 0) {
LAB_1401f1b56:
        local_118 = 0x7f;
        goto LAB_1401f1a67;
      }
      local_e4 = DAT_141dcd814;
      local_e8 = DAT_141dcd810;
      if ((1 << ((byte)DAT_141dcd814 & 0x1f) & 0x46U) == 0) {
        local_f0 = DAT_141dcd808;
      }
      else {
        FUN_1400419b0(&local_f0,&DAT_141dcd808);
      }
      iVar1 = FUN_140e851f0(&local_138,&local_f0,DAT_141955260,0);
      if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f0);
      }
      if (iVar1 == 0) goto LAB_1401f1b56;
      uStack_13c = DAT_141dcd7f4;
      uStack_140 = DAT_141dcd7f0;
      if ((1 << ((byte)DAT_141dcd7f4 & 0x1f) & 0x46U) == 0) {
        local_148 = DAT_141dcd7e8;
      }
      else {
        FUN_1400419b0(&local_148,&DAT_141dcd7e8);
      }
      iVar1 = FUN_140e851f0(&local_138,&local_148,DAT_141955260,0);
      if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      if (iVar1 == 0) goto LAB_1401f1b56;
      local_118 = 0x80;
      uVar2 = local_14c & 0xffffff;
      if (uVar2 == 0) {
LAB_1401f1a4a:
        local_158 = local_158 + 1.0;
      }
      else {
        if (uVar2 == 1) {
          local_158 = (double)FUN_140e4b060(&local_158);
          local_14c = 0;
          goto LAB_1401f1a4a;
        }
        if (uVar2 == 7) {
          local_158 = (double)CONCAT44(local_158._4_4_,local_158._0_4_ + 1);
        }
        else if (uVar2 == 10) {
          local_158 = (double)((longlong)local_158 + 1);
        }
        else {
          if (uVar2 == 0xd) {
            local_14c = 0;
            goto LAB_1401f1a4a;
          }
          FUN_140042910(&DAT_14172c3d8,&local_158,&local_158);
        }
      }
    } while (0 < iVar5);
  }
  local_118 = 0x83;
  uVar7 = 0;
LAB_1401f1a67:
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}


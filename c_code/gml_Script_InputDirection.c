// gml_Script_InputDirection @ 0x140326700

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Script_InputDirection(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  double local_128;
  uint local_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  uint uStack_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_e0 = "gml_Script_InputDeviceStopAllRebinding";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 5;
  _eh_vector_constructor_iterator_(local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_11c = 0xffffff;
  local_128 = 0.0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 7;
  local_118 = _DAT_1419df7a0;
  uStack_114 = uRam00000001419df7a4;
  uStack_110 = uRam00000001419df7a8;
  uStack_10c = uRam00000001419df7ac;
  if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_78 = local_c8;
  plVar3 = (longlong *)
           gml_Script_InputDeviceGetAnyGamepadConnected(param_1,param_2,&local_108,1,&local_78);
  lVar4 = 0;
  uVar6 = 0xffffff;
  if (plVar3 != &local_f8) {
    local_118 = (undefined4)*plVar3;
    uStack_114 = *(undefined4 *)((longlong)plVar3 + 4);
    uStack_110 = (undefined4)plVar3[1];
    uStack_10c = *(undefined4 *)((longlong)plVar3 + 0xc);
    FUN_140041b80(&local_f8,&local_118);
    lVar4 = local_f8;
    uVar6 = uStack_ec;
  }
  local_d8 = 8;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0.0;
  local_d8 = 9;
  iVar5 = 0;
  if ((uVar6 == 2) && (lVar4 != 0)) {
    iVar5 = *(int *)(lVar4 + 0x24);
  }
  if (0 < iVar5) {
    do {
      iVar5 = iVar5 + -1;
      local_d8 = 0xb;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_108 = 0;
      local_100 = 0;
      local_fc = 5;
      iVar1 = FUN_140e4a740(&local_128);
      plVar3 = (longlong *)0x0;
      if (((uVar6 & 0xffffff) == 2) && (lVar4 != 0)) {
        if ((iVar1 < 0) || (*(int *)(lVar4 + 0x24) <= iVar1)) {
          FUN_140e632c0("index out of bounds request %d maximum size is %d",iVar1,
                        *(undefined4 *)(lVar4 + 0x24));
        }
        else {
          plVar3 = (longlong *)((longlong)iVar1 * 0x10 + *(longlong *)(lVar4 + 8));
        }
        if (plVar3 != local_c8) goto LAB_140326947;
      }
      else {
        FUN_140e632c0("trying to index variable that is not an array");
        plVar3 = &local_f8;
LAB_140326947:
        local_118 = (undefined4)*plVar3;
        uStack_114 = *(undefined4 *)((longlong)plVar3 + 4);
        uStack_110 = (undefined4)plVar3[1];
        uStack_10c = *(undefined4 *)((longlong)plVar3 + 0xc);
        if ((1 << ((byte)local_c8[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_118);
      }
      local_78 = local_c8;
      local_118 = _DAT_1419df7a0;
      uStack_114 = uRam00000001419df7a4;
      uStack_110 = uRam00000001419df7a8;
      uStack_10c = uRam00000001419df7ac;
      if ((1 << (local_b8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_118);
      local_70 = local_b8;
      local_118 = (undefined4)DAT_1419df7b0;
      uStack_114 = DAT_1419df7b0._4_4_;
      uStack_110 = DAT_1419df7b8;
      uStack_10c = DAT_1419df7bc;
      if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_118);
      local_68 = local_a8;
      local_118 = (undefined4)DAT_1419df7b0;
      uStack_114 = DAT_1419df7b0._4_4_;
      uStack_110 = DAT_1419df7b8;
      uStack_10c = DAT_1419df7bc;
      if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_118);
      local_60 = local_98;
      local_118 = (undefined4)DAT_1419df7b0;
      uStack_114 = DAT_1419df7b0._4_4_;
      uStack_110 = DAT_1419df7b8;
      uStack_10c = DAT_1419df7bc;
      if ((1 << (local_88[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_118);
      local_58 = local_88;
      gml_Script_InputDeviceStopAllRebinding(param_1,param_2,&local_108,5,&local_78);
      local_d8 = 0xc;
      uVar2 = local_11c & 0xffffff;
      if (uVar2 == 0) {
LAB_140326ad5:
        local_128 = local_128 + 1.0;
      }
      else {
        if (uVar2 == 1) {
          local_128 = (double)FUN_140e4b060(&local_128);
          local_11c = 0;
          goto LAB_140326ad5;
        }
        if (uVar2 == 7) {
          local_128 = (double)CONCAT44(local_128._4_4_,local_128._0_4_ + 1);
        }
        else if (uVar2 == 10) {
          local_128 = (double)((longlong)local_128 + 1);
        }
        else {
          if (uVar2 == 0xd) {
            local_11c = 0;
            goto LAB_140326ad5;
          }
          FUN_140042910(&DAT_14172c3d8,&local_128,&local_128);
        }
      }
    } while (0 < iVar5);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}


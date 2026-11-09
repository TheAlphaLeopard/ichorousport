// gml_Script___InputMotionQuatToPitch @ 0x1400b9670

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___InputMotionQuatToPitch
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 **ppuVar8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined4 *local_70;
  undefined8 local_68;
  byte local_5c;
  undefined8 local_58;
  byte local_4c;
  undefined4 local_48 [3];
  byte local_3c;
  
  local_b0 = "gml_Script___InputMotionClass";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 5;
  _eh_vector_constructor_iterator_(&local_68,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_dc = 0;
  uVar7 = 0;
  local_e8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc6d0) {
    _Init_thread_header(&DAT_141ddc6d0);
    if (DAT_141ddc6d0 == -1) {
      DAT_141ddc6d8 = (longlong *)FUN_140e63aa0(DAT_141a01d38);
      _Init_thread_footer(&DAT_141ddc6d0);
    }
  }
  if (DAT_141ddc049 == '\0') {
    FUN_140e64380(DAT_141ddc6d8,"gml_Script___InputMotionClass");
    FUN_140e64380(param_1,"gml_Script___InputMotionClass");
  }
  FUN_140e643a0(param_1,DAT_141ddc6d8);
  local_a8 = 0x26;
  if (DAT_141ddc049 == '\0') {
    DAT_141ddc049 = '\x01';
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc6d8 + 0x10))(DAT_141ddc6d8,DAT_141a01d18);
    FUN_140e609c0(DAT_141ddc6d8);
    FUN_140e645a0(&local_f8,gml_Script___Update_anon_1704___InputMotionClass___InputMotionClass,0);
    if (&local_f8 != puVar3) {
      local_d8 = (undefined4)local_f8;
      uStack_d4 = local_f8._4_4_;
      uStack_d0 = uStack_f0;
      uStack_cc = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_d8);
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e60910(1);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc6d8 + 0x10))(DAT_141ddc6d8,DAT_141a01c48);
    FUN_140e609c0(DAT_141ddc6d8);
    FUN_140e645a0(&local_f8,gml_Script___InputMotionClass,0);
    if (&local_f8 != puVar3) {
      local_d8 = (undefined4)local_f8;
      uStack_d4 = local_f8._4_4_;
      uStack_d0 = uStack_f0;
      uStack_cc = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_d8);
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e60910(1);
    puVar3 = (undefined8 *)(**(code **)(*DAT_141ddc6d8 + 0x10))(DAT_141ddc6d8,DAT_1419fd598);
    FUN_140e609c0(DAT_141ddc6d8);
    FUN_140e645a0(&local_f8,gml_GlobalScript___InputMotionQuatToPitch,0);
    if (&local_f8 != puVar3) {
      local_d8 = (undefined4)local_f8;
      uStack_d4 = local_f8._4_4_;
      uStack_d0 = uStack_f0;
      uStack_cc = uStack_ec;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_d8);
    }
    if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140e60910(1);
  }
  local_a8 = 7;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd5c8);
  FUN_140e609c0(param_1);
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  if (param_5 != puVar3) {
    local_d8 = *(undefined4 *)param_5;
    uStack_d4 = *(undefined4 *)((longlong)param_5 + 4);
    uStack_d0 = *(undefined4 *)(param_5 + 1);
    uStack_cc = *(undefined4 *)((longlong)param_5 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  FUN_140e60910(1);
  local_a8 = 9;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01de8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_a8 = 10;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_a8 = 0xb;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c88);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_a8 = 0xc;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c98);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_a8 = 0xe;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01dd8);
  uStack_ec = 0xd;
  local_f8 = 0;
  if (&local_f8 != puVar3) {
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = uStack_f0;
    uStack_cc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_d8);
  }
  local_a8 = 0x15;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_d8 = _DAT_1419e1890;
  uStack_d4 = uRam00000001419e1894;
  uStack_d0 = uRam00000001419e1898;
  uStack_cc = uRam00000001419e189c;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  FUN_140041b80(&local_68,&local_d8);
  local_80 = &local_68;
  uVar4 = gml_Script_InputIconDefineEmpty(param_1,param_2,&local_e8,1,&local_80);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_a8 = 0x1d;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c28);
    uStack_ec = 0xd;
    local_f8 = 0;
    if (&local_f8 != puVar3) {
      local_d8 = 0;
      uStack_d4 = 0;
      uStack_d0 = uStack_f0;
      uStack_cc = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_d8);
    }
  }
  else {
    local_a8 = 0x18;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd5c8);
    if (puVar3 != &local_58) {
      local_d8 = *(undefined4 *)puVar3;
      uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_58);
      }
      FUN_140041b80(&local_58,&local_d8);
    }
    local_78 = &local_58;
    ppuVar8 = &local_78;
    puVar3 = (undefined8 *)gml_Script_InputDeviceIsActive(param_1,param_2,&local_c8,1,ppuVar8);
    uVar10 = (undefined4)((ulonglong)ppuVar8 >> 0x20);
    if (puVar3 != &local_90) {
      local_d8 = *(undefined4 *)puVar3;
      uStack_d4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_d0 = *(undefined4 *)(puVar3 + 1);
      uStack_cc = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_90);
      }
      FUN_140041b80(&local_90,&local_d8);
    }
    local_a8 = 0x19;
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a01c28);
    cVar1 = '\0';
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    local_80 = &local_90;
    uVar9 = CONCAT44(uVar10,DAT_141a014a8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar9,&local_80);
    uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
    cVar2 = FUN_140e491e0(uVar4);
    if (cVar2 != '\0') {
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a0);
      }
      local_a0 = 0;
      local_98 = 0;
      local_94 = 5;
      local_78 = &local_90;
      uVar4 = CONCAT44(uVar10,DAT_1419febf8);
      puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_a0,1,uVar4,&local_78);
      uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if (puVar6 != local_48) {
        local_d8 = *puVar6;
        uStack_d4 = puVar6[1];
        uStack_d0 = puVar6[2];
        uStack_cc = puVar6[3];
        if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_48);
        }
        FUN_140041b80(local_48,&local_d8);
      }
      local_70 = local_48;
      uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,CONCAT44(uVar10,DAT_1419fcb88),&local_70);
      cVar1 = FUN_140e491e0(uVar4);
    }
    FUN_140e609c0(param_1);
    if ((1 << ((byte)*(undefined4 *)((longlong)plVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(plVar5);
    }
    *(undefined4 *)((longlong)plVar5 + 0xc) = 0xd;
    if (cVar1 != '\0') {
      uVar7 = 0x3ff00000;
    }
    *plVar5 = (ulonglong)uVar7 << 0x20;
    FUN_140e60910(1);
  }
  local_a8 = 0x20;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar4 = (**(code **)(*DAT_141ddc6d8 + 8))(DAT_141ddc6d8,DAT_141a01d18);
  FUN_140e63610(param_1,param_2,&local_e8,0,uVar4,0);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(&local_68,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}


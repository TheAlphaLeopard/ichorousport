// gml_Object_oInfinityManager_CleanUp_0 @ 0x140b30450

void gml_Object_oInfinityManager_CleanUp_0(longlong *param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar8;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar9;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_e0 = "gml_Object_oInfinityManager_Other_4";
  local_d8 = 0;
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  uVar8 = 1;
  _eh_vector_constructor_iterator_(local_88,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fecd8);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_d8 = 5;
  uStack_10c = 0xf;
  local_118 = (longlong *)0x100000000000025;
  local_108 = 0x25;
  uStack_104 = 0x1000000;
  uStack_100 = uStack_110;
  uStack_fc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_108);
  local_48 = local_88;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_f8,1,CONCAT44(uVar8,DAT_141a02ef8),&local_48);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_d8 = 5;
  }
  else {
    local_d8 = 6;
    uStack_10c = 0;
    local_118 = (longlong *)0x4008000000000000;
    iVar2 = FUN_140e851f0(uVar3,&local_118,DAT_141955260,1);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    if (iVar2 == -2 || 0 < iVar2) {
      local_d8 = 8;
      puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3a08);
      uStack_10c = 0xf;
      local_118 = (longlong *)0x100000000000025;
      FUN_140e87170(&local_118,DAT_141a1f580,0x80000000,&local_c8,param_1,param_2);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140e609c0(param_1);
      if (&local_c8 != puVar5) {
        local_108 = (undefined4)local_c8;
        uStack_104 = local_c8._4_4_;
        uStack_100 = uStack_c0;
        uStack_fc = uStack_bc;
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_108);
      }
      FUN_140e60910(1);
      local_d8 = 0x10;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 5;
      uStack_10c = 0xf;
      local_118 = (longlong *)0x100000000000025;
      FUN_140e87170(&local_118,DAT_1419fe0e8,0x80000000,&local_98,param_1,param_2);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      uStack_10c = 0xf;
      local_118 = (longlong *)0x100000000000025;
      plVar6 = param_1;
      uVar9 = param_2;
      FUN_140e87170(&local_118,DAT_1419fe158,0x80000000,&local_a8,param_1,param_2);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      uStack_10c = 6;
      uVar7 = (ulonglong)plVar6 & 0xffffffffffffff00;
      local_118 = param_1;
      FUN_140e87440(&local_118,DAT_141a1b910,0x80000000,&local_b8,uVar7,uVar9 & 0xffffffffffffff00);
      uVar8 = (undefined4)(uVar7 >> 0x20);
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      local_108 = (undefined4)local_98;
      uStack_104 = local_98._4_4_;
      uStack_100 = uStack_90;
      uStack_fc = uStack_8c;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_108);
      local_48 = local_88;
      local_108 = (undefined4)local_a8;
      uStack_104 = local_a8._4_4_;
      uStack_100 = uStack_a0;
      uStack_fc = uStack_9c;
      if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_108);
      local_40 = local_78;
      local_108 = (undefined4)local_b8;
      uStack_104 = local_b8._4_4_;
      uStack_100 = uStack_b0;
      uStack_fc = uStack_ac;
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_68);
      }
      FUN_140041b80(local_68,&local_108);
      local_38 = local_68;
      uStack_10c = 0xf;
      local_118 = (longlong *)0x100000000000070;
      local_108 = 0x70;
      uStack_104 = 0x1000000;
      uStack_100 = uStack_110;
      uStack_fc = 0xf;
      if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_58);
      }
      FUN_140041b80(local_58,&local_108);
      local_30 = local_58;
      FUN_140e634e0(param_1,param_2,&local_f8,4,CONCAT44(uVar8,DAT_141a0a7c8),&local_48);
    }
    else {
      local_d8 = 6;
    }
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return;
}


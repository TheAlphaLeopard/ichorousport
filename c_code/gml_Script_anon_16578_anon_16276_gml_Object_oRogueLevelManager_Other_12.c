// gml_Script_anon_16578_anon_16276_gml_Object_oRogueLevelManager_Other_12 @ 0x140d15dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_16578_anon_16276_gml_Object_oRogueLevelManager_Other_12
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 **ppuVar8;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  byte local_5c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  
  local_d0 = "gml_Script_anon@15960@gml_Object_oRogueLevelManager_Other_12";
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  local_c8 = 0x228;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(&local_a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_11c = 0;
  local_128 = 0;
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_c8 = 0x229;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == &local_98) goto LAB_140d15eec;
  }
  local_138 = *(undefined4 *)puVar2;
  uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_130 = *(undefined4 *)(puVar2 + 1);
  uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_138);
LAB_140d15eec:
  local_50 = &local_98;
  uVar3 = CONCAT44(uVar7,DAT_1419fcb18);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,1,uVar3,&local_50);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_e8) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_138);
  }
  local_c8 = 0x22a;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f9a98);
  if (puVar2 != &local_a8) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_138);
  }
  local_58 = &local_a8;
  local_50 = &local_e8;
  uVar3 = CONCAT44(uVar7,DAT_141a01138);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_128,2,uVar3,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if (puVar2 != &local_118) {
    local_138 = *(undefined4 *)puVar2;
    uStack_134 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_130 = *(undefined4 *)(puVar2 + 1);
    uStack_12c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
  }
  local_c8 = 0x22b;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  local_58 = &local_118;
  uVar5 = CONCAT44(uVar7,DAT_1419fdc08);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_128,1,uVar5,&local_58);
  uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_c8 = 0x22c;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    local_138 = _DAT_1419ed620;
    uStack_134 = uRam00000001419ed624;
    uStack_130 = uRam00000001419ed628;
    uStack_12c = uRam00000001419ed62c;
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_138);
    local_50 = &local_98;
    local_138 = _DAT_1419ed620;
    uStack_134 = uRam00000001419ed624;
    uStack_130 = uRam00000001419ed628;
    uStack_12c = uRam00000001419ed62c;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_138);
    local_48 = local_88;
    local_138 = _DAT_141ddb008;
    uStack_134 = uRam0000000141ddb00c;
    uStack_130 = uRam0000000141ddb010;
    uStack_12c = DAT_141ddb014;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_138);
    local_40 = local_78;
    if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_68)) {
      local_138 = *(undefined4 *)puVar4;
      uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_130 = *(undefined4 *)(puVar4 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_68);
      }
      FUN_140041b80(&local_68,&local_138);
    }
    ppuVar8 = &local_50;
    uVar6 = CONCAT44(uVar7,DAT_141a0a7c8);
    local_38 = &local_68;
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_108,4,uVar6,ppuVar8);
    if (puVar4 != &local_f8) {
      local_138 = *(undefined4 *)puVar4;
      uStack_134 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_130 = *(undefined4 *)(puVar4 + 1);
      uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_138);
    }
    local_c8 = 0x22d;
    FUN_140e87440(&local_f8,DAT_141a57c50,0x80000000,&local_b8,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    local_138 = (undefined4)local_b8;
    uStack_134 = local_b8._4_4_;
    uStack_130 = uStack_b0;
    uStack_12c = uStack_ac;
    if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_138);
    local_c8 = 0x22e;
    local_58 = &local_f8;
    FUN_140edd0e0(param_1,param_2,1,&local_58);
    local_c8 = 0x22f;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f9a98);
    FUN_140e98ef0(param_1,param_2,uVar3,&local_e8,&local_118);
  }
  local_c8 = 0x231;
  if (&local_118 != param_3) {
    local_138 = (undefined4)local_118;
    uStack_134 = local_118._4_4_;
    uStack_130 = uStack_110;
    uStack_12c = uStack_10c;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_138);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(&local_a8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return param_3;
}


// gml_Script_anon_5174_SnowState_SnowState @ 0x1404f5b60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_5174_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_c8 [16];
  undefined4 local_b8 [3];
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_f0 = "gml_Script_anon@4898@SnowState@SnowState";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0xa7;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_d4 = 0;
  local_e0 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0xa8;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fcf28);
  if (puVar2 != local_b8) {
    local_108 = *puVar2;
    uStack_104 = puVar2[1];
    uStack_100 = puVar2[2];
    uStack_fc = puVar2[3];
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_108);
  }
  local_50 = local_b8;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)*param_5;
    if (puVar3 == &local_a8) goto LAB_1404f5cb3;
  }
  local_108 = *(undefined4 *)puVar3;
  uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_100 = *(undefined4 *)(puVar3 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_108);
LAB_1404f5cb3:
  local_48 = &local_a8;
  uVar4 = FUN_140e634e0(param_1,param_2,&local_e0,2,CONCAT44(uVar6,DAT_1419fcba8),&local_50);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_e8 = 0xa9;
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcff8);
    if ((param_4 < 1) || (puVar5 = (undefined8 *)*param_5, puVar5 != &local_98)) {
      local_108 = *(undefined4 *)puVar5;
      uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_100 = *(undefined4 *)(puVar5 + 1);
      uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_108);
    }
    local_40 = &local_98;
    FUN_140e645a0(&local_108,&LAB_1404f5b30,param_1);
    local_68 = local_108;
    uStack_64 = uStack_104;
    uStack_60 = uStack_100;
    uStack_5c = uStack_fc;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_68);
    if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_38 = local_88;
    local_68 = _DAT_1419e5f90;
    uStack_64 = uRam00000001419e5f94;
    uStack_60 = uRam00000001419e5f98;
    uStack_5c = uRam00000001419e5f9c;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_68);
    local_30 = local_78;
    FUN_140e63610(param_1,param_2,&local_118,3,uVar4,&local_40);
  }
  local_e8 = 0xac;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar4 = FUN_140e5c910();
  FUN_140e42c10(uVar4,param_1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}


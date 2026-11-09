// gml_Script_anon_4213____struct___136___new_lighting_system_lighting_system @ 0x1403a4e70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4213____struct___136___new_lighting_system_lighting_system
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined4 local_c8 [3];
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 *local_68;
  undefined8 *local_60;
  undefined4 *local_58;
  undefined8 *local_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Script_anon@2889@___struct___136@__new_lighting_system@lighting_system";
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  local_38 = 0x58;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_e8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_38 = 0x59;
  uStack_7c = 0xf;
  local_88 = 0x10000080000000b;
  local_108 = 0xb;
  uStack_104 = 0x1000008;
  uStack_100 = uStack_80;
  uStack_fc = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_108);
  local_68 = local_c8;
  local_108 = _DAT_141dd24d8;
  uStack_104 = uRam0000000141dd24dc;
  uStack_100 = uRam0000000141dd24e0;
  uStack_fc = DAT_141dd24e4;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_108);
  local_60 = &local_b8;
  uVar4 = CONCAT44(uVar5,DAT_141a04778);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar4,&local_68);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar1 != local_a8) {
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_108);
  }
  local_58 = local_a8;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (undefined8 *)param_5[1];
    if (puVar2 == &local_98) goto LAB_1403a5057;
  }
  local_108 = *(undefined4 *)puVar2;
  uStack_104 = *(undefined4 *)((longlong)puVar2 + 4);
  uStack_100 = *(undefined4 *)(puVar2 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_108);
LAB_1403a5057:
  local_50 = &local_98;
  FUN_140ec9ea0(2,&local_58);
  local_38 = 0x5a;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_7c = 0xf;
  local_88 = 0x10000080000000b;
  local_108 = 0xb;
  uStack_104 = 0x1000008;
  uStack_100 = uStack_80;
  uStack_fc = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_108);
  local_78 = local_e8;
  local_108 = _DAT_141dd2458;
  uStack_104 = uRam0000000141dd245c;
  uStack_100 = uRam0000000141dd2460;
  uStack_fc = DAT_141dd2464;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_70 = local_d8;
  uVar4 = CONCAT44(uVar5,DAT_141a04778);
  puVar1 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar4,&local_78);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar1 != local_c8) {
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_108);
  }
  local_68 = local_c8;
  if ((param_4 < 1) || (puVar3 = (undefined8 *)*param_5, puVar3 != &local_b8)) {
    local_108 = *(undefined4 *)puVar3;
    uStack_104 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_100 = *(undefined4 *)(puVar3 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_108);
  }
  local_60 = &local_b8;
  FUN_140ec9ea0(2,&local_68);
  local_38 = 0x5b;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_7c = 0xf;
  local_88 = 0x10000080000000b;
  local_108 = 0xb;
  uStack_104 = 0x1000008;
  uStack_100 = uStack_80;
  uStack_fc = 0xf;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_108);
  local_78 = local_e8;
  local_108 = _DAT_141dd24b8;
  uStack_104 = uRam0000000141dd24bc;
  uStack_100 = uRam0000000141dd24c0;
  uStack_fc = DAT_141dd24c4;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_108);
  local_70 = local_d8;
  puVar1 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar5,DAT_141a04778),&local_78);
  if (puVar1 != local_c8) {
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_108);
  }
  local_68 = local_c8;
  local_108 = _DAT_1419e4680;
  uStack_104 = uRam00000001419e4684;
  uStack_100 = uRam00000001419e4688;
  uStack_fc = uRam00000001419e468c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_108);
  local_60 = &local_b8;
  FUN_140ec9ea0(2,&local_68);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_e8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_48;
  return param_3;
}


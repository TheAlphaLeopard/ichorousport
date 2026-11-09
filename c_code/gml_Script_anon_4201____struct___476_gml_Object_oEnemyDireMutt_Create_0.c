// gml_Script_anon_4201____struct___476_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409bea90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_4201____struct___476_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 **ppuVar8;
  ulonglong uVar9;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_a0 = "gml_Script_anon@3882@___struct___475@gml_Object_oEnemyDireMutt_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0xd4;
  _eh_vector_constructor_iterator_(&local_e8,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_3c = 0xffffff;
  local_48 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_fc = 0;
  local_108 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0xd6;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar4 = (ulonglong *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar3 != &local_e8) {
    local_f8 = *puVar3;
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
  }
  local_90 = &local_e8;
  if ((*(uint *)((longlong)puVar4 + 0xc) & 0xffffff) == 0) {
    local_f8 = *puVar4;
  }
  else {
    local_f8 = FUN_140e4b060(puVar4);
  }
  uStack_ec = 0;
  local_f8 = local_f8 ^ 0x8000000000000000;
  uStack_6c = 0;
  uStack_70 = uStack_f0;
  uStack_4c = 0;
  local_58 = 0x3fd0000000000000;
  local_78 = local_f8;
  FUN_140042560(&local_78,&local_58);
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  local_58 = local_78;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_58);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_88 = local_d8;
  local_f8 = CONCAT44(uRam00000001419ea8f4,_DAT_1419ea8f0);
  uStack_f0 = uRam00000001419ea8f8;
  uStack_ec = uRam00000001419ea8fc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_f8);
  local_80 = local_c8;
  FUN_140e609c0(param_1);
  puVar3 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_108,3,&local_90);
  if (puVar3 != puVar5) {
    local_f8 = *puVar3;
    uStack_f0 = *(undefined4 *)(puVar3 + 1);
    uStack_ec = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_f8);
  }
  FUN_140e60910(1);
  local_98 = 0xd8;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_f8);
  local_90 = &local_e8;
  local_f8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_f0 = DAT_1419df7b8;
  uStack_ec = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_f8);
  local_88 = local_d8;
  uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_108,2,&local_90);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') {
    local_98 = 0xe1;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_108,0,uVar6,0);
    local_98 = 0xe2;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    FUN_140e63610(param_1,param_2,&local_108,0,uVar6,0);
    local_98 = 0xe3;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0ef8);
    uVar9 = 0;
    FUN_140e63610(param_1,param_2,&local_108,0,uVar7,0);
    local_98 = 0xe4;
    uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar6,DAT_141a0a848,0x80000000,&local_68,uVar7 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    FUN_1400460e0(&local_68,uVar2);
    FUN_140e87930(uVar6,DAT_141a0a848,0x80000000,&local_68);
  }
  else {
    local_98 = 0xda;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0e88);
    local_f8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_f0 = uRam00000001419df7a8;
    uStack_ec = uRam00000001419df7ac;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_f8);
    local_80 = local_c8;
    ppuVar8 = &local_80;
    FUN_140e63610(param_1,param_2,&local_b8,1,uVar7,ppuVar8);
    local_98 = 0xdb;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_108 = 0;
    local_100 = 0;
    local_fc = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_48,uVar7 & 0xffffffffffffff00,
                  (ulonglong)ppuVar8 & 0xffffffffffffff00);
    local_f8 = CONCAT44(uRam0000000141dd898c,_DAT_141dd8988);
    uStack_f0 = uRam0000000141dd8990;
    uStack_ec = DAT_141dd8994;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_f8);
    local_90 = &local_e8;
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_108,1,&local_48,&local_90);
    local_98 = 0xdc;
    puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
    *puVar3 = 0;
    local_98 = 0xdd;
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  _eh_vector_destructor_iterator_(&local_e8,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


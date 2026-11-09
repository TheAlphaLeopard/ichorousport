// gml_Script_anon_10031_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409c7980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_10031_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  undefined4 **ppuVar8;
  ulonglong in_stack_ffffffffffffff10;
  ulonglong uVar9;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90 [3];
  byte local_84;
  undefined1 local_80 [12];
  byte local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined8 local_60;
  undefined4 local_54;
  undefined4 *local_50;
  undefined1 *local_48;
  undefined1 *local_40 [3];
  
  local_a0 = "gml_Script_anon@9771@___struct___479@gml_Object_oEnemyDireMutt_Create_0";
  local_a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_a8;
  local_98 = 0x215;
  _eh_vector_constructor_iterator_(local_90,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_54 = 0xffffff;
  local_60 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_dc = 0;
  local_e8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_98 = 0x217;
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if (puVar3 != local_90) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_90);
    }
    FUN_140041b80(local_90,&local_d8);
  }
  local_50 = local_90;
  local_d8 = _DAT_141dc6ea0;
  uStack_d4 = uRam0000000141dc6ea4;
  uStack_d0 = uRam0000000141dc6ea8;
  uStack_cc = uRam0000000141dc6eac;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_48 = local_80;
  local_d8 = _DAT_1419ea8f0;
  uStack_d4 = uRam00000001419ea8f4;
  uStack_d0 = uRam00000001419ea8f8;
  uStack_cc = uRam00000001419ea8fc;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_d8);
  local_40[0] = local_70;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)gml_Script_arc(param_1,param_2,&local_e8,3,&local_50);
  if (puVar3 != puVar4) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << ((byte)puVar4[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_d8);
  }
  FUN_140e60910(1);
  local_98 = 0x219;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_d8 = (undefined4)DAT_1419df7b0;
  uStack_d4 = DAT_1419df7b0._4_4_;
  uStack_d0 = DAT_1419df7b8;
  uStack_cc = DAT_1419df7bc;
  if ((1 << (local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_90);
  }
  FUN_140041b80(local_90,&local_d8);
  local_50 = local_90;
  local_d8 = (undefined4)DAT_1419df7b0;
  uStack_d4 = DAT_1419df7b0._4_4_;
  uStack_d0 = DAT_1419df7b8;
  uStack_cc = DAT_1419df7bc;
  if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_80);
  }
  FUN_140041b80(local_80,&local_d8);
  local_48 = local_80;
  ppuVar8 = &local_50;
  uVar5 = gml_Script_animcurve_lerp(param_1,param_2,&local_e8,2,ppuVar8);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_98 = 0x222;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
    FUN_140e63610(param_1,param_2,&local_e8,0,uVar5,0);
    local_98 = 0x223;
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    local_e8 = 0;
    local_e0 = 0;
    local_dc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0ef8);
    uVar9 = 0;
    FUN_140e63610(param_1,param_2,&local_e8,0,uVar7,0);
    local_98 = 0x224;
    uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    FUN_140e87440(uVar5,DAT_141a0a848,0x80000000,&local_c8,uVar7 & 0xffffffffffffff00,
                  uVar9 & 0xffffffffffffff00);
    FUN_1400460e0(&local_c8,uVar2);
    FUN_140e87930(uVar5,DAT_141a0a848,0x80000000,&local_c8);
  }
  else {
    local_98 = 0x21b;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar2,DAT_141a55540,0x80000000,&local_60,(ulonglong)ppuVar8 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff10 & 0xffffffffffffff00);
    local_d8 = _DAT_141dd8988;
    uStack_d4 = uRam0000000141dd898c;
    uStack_d0 = uRam0000000141dd8990;
    uStack_cc = DAT_141dd8994;
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_70);
    }
    FUN_140041b80(local_70,&local_d8);
    local_40[0] = local_70;
    uVar2 = FUN_140069500(uVar2);
    FUN_140e63610(uVar2,param_2,&local_b8,1,&local_60,local_40);
    local_98 = 0x21c;
    puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar6);
    }
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    *puVar6 = 0;
    local_98 = 0x21d;
    uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_bc = 0;
    local_c8 = 0;
    FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_c8);
    local_98 = 0x21e;
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  _eh_vector_destructor_iterator_(local_90,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_a8;
  return param_3;
}


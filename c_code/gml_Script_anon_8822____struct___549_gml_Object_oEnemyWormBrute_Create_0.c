// gml_Script_anon_8822____struct___549_gml_Object_oEnemyWormBrute_Create_0 @ 0x140a9a990

undefined8 *
gml_Script_anon_8822____struct___549_gml_Object_oEnemyWormBrute_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  undefined8 **ppuVar6;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  byte local_74;
  undefined8 local_70;
  byte local_64;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_anon@8105@___struct___549@gml_Object_oEnemyWormBrute_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x166;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_80,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ec = 0;
  local_f8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x167;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e87930(uVar1,DAT_141a0a848,0x80000000,&local_b8);
  local_88 = 0x168;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f24c8);
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f2318);
  if (puVar2 != &local_80) {
    local_e8 = *puVar2;
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_74 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_80);
    }
    FUN_140041b80(&local_80,&local_e8);
  }
  local_60 = &local_80;
  if (puVar3 != &local_70) {
    local_e8 = *puVar3;
    uStack_e0 = *(undefined4 *)(puVar3 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_e8);
  }
  local_58 = &local_70;
  ppuVar6 = &local_60;
  uVar4 = CONCAT44(uVar5,DAT_141a0bf58);
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_f8,2,uVar4,ppuVar6);
  if (puVar2 != &local_c8) {
    local_e8 = *puVar2;
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_e8);
  }
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar1,DAT_1419f2378,0x80000000,&local_c8);
  local_88 = 0x169;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87440(uVar1,DAT_1419f2378,0x80000000,&local_d8,uVar4 & 0xffffffffffffff00,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  uStack_dc = local_cc;
  uStack_e0 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_e8 = local_d8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_d8);
  }
  uVar5 = uStack_dc;
  local_48 = (undefined4)local_e8;
  uStack_44 = local_e8._4_4_;
  uStack_40 = uStack_e0;
  uStack_3c = uStack_dc;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_48);
  if ((1 << ((byte)uVar5 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e87930(uVar1,DAT_1419f2568,0x80000000,&local_a8);
  local_88 = 0x16a;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  FUN_140e63610(param_1,param_2,&local_f8,0,uVar1,0);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_80,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


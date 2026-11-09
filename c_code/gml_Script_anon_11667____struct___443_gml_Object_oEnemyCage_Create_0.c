// gml_Script_anon_11667____struct___443_gml_Object_oEnemyCage_Create_0 @ 0x140938a30

undefined8 *
gml_Script_anon_11667____struct___443_gml_Object_oEnemyCage_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 *local_res18 [2];
  longlong *plVar7;
  ulonglong uVar8;
  longlong *local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_54;
  
  local_70 = "gml_Script_anon@10092@___struct___443@gml_Object_oEnemyCage_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0x1b4;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = (longlong *)0x0;
  local_54 = 0xffffff;
  local_60 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_bc = 0;
  local_c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0x1b5;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  if (puVar2 != &local_88) {
    local_e8 = (longlong *)*puVar2;
    uStack_e0 = *(undefined4 *)(puVar2 + 1);
    uStack_dc = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_e8);
  }
  local_res18[0] = &local_88;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar6,DAT_141a02ef8),local_res18);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_68 = 0x1b5;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f440);
    FUN_140e609c0(param_1);
    puVar4 = (undefined8 *)gml_Script_FracPos(param_1,param_2,&local_c8,0,0);
    if (puVar4 != puVar2) {
      local_e8 = (longlong *)*puVar4;
      uStack_e0 = *(undefined4 *)(puVar4 + 1);
      uStack_dc = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_e8);
    }
    FUN_140e60910(1);
  }
  local_68 = 0x1b7;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_8c = 0;
  local_98 = 0;
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_98);
  local_68 = 0x1b8;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f440);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  plVar7 = param_1;
  uVar8 = param_2;
  FUN_140e87170(uVar3,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
  uStack_dc = 6;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_1419fe0e8,0x80000000,&local_60,(ulonglong)plVar7 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  uStack_dc = local_9c;
  uStack_e0 = local_a0;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_e8 = local_a8;
  }
  else {
    FUN_1400419b0(&local_e8,&local_a8);
  }
  FUN_1400462a0(&local_e8,&local_60);
  if ((uStack_dc & 0xffffff) == 0) {
    uVar6 = SUB84(local_e8,0);
  }
  else {
    uVar6 = FUN_140e4b060(&local_e8);
  }
  uVar3 = FUN_140e79500(uVar6);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = uVar3;
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140e87930(uVar5,DAT_1419efee8,0x80000000,&local_b8);
  local_68 = 0x1bc;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  FUN_140e63610(param_1,param_2,&local_d8,0,uVar3,0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_60);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


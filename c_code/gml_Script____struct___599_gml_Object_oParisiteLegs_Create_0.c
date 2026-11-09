// gml_Script____struct___599_gml_Object_oParisiteLegs_Create_0 @ 0x140bb2630

undefined8 *
gml_Script____struct___599_gml_Object_oParisiteLegs_Create_0
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
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
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_90 = "gml_Script_anon@2238@___struct___599@gml_Object_oParisiteLegs_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_dc = 0;
  local_e8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x94;
  local_4c = 0;
  local_58 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_58);
  local_88 = 0x95;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_ac = 0;
  local_b8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_b8);
  local_88 = 0x97;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a066f8);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 0x98;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06658);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_88 = 0x9a;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_bc = 0;
  local_c8 = 0xc024000000000000;
  FUN_140e87930(uVar3,DAT_141a1f090,0x80000000,&local_c8);
  local_88 = 0x9b;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  plVar4 = param_1;
  uVar5 = param_2;
  FUN_140e87170(uVar3,DAT_141a0a728,0x80000000,&local_d8,param_1,param_2);
  uStack_6c = local_cc;
  uStack_70 = local_d0;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
    local_78 = local_d8;
  }
  else {
    FUN_1400419b0(&local_78,&local_d8);
  }
  uVar1 = uStack_6c;
  local_48 = (undefined4)local_78;
  uStack_44 = local_78._4_4_;
  uStack_40 = uStack_70;
  uStack_3c = uStack_6c;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_48);
  if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e86c30(uVar3,DAT_1419f5c58,0x80000000,&local_a8);
  local_88 = 0x9d;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  FUN_140e87440(uVar3,DAT_141a06298,0x80000000,&local_68,(ulonglong)plVar4 & 0xffffffffffffff00,
                uVar5 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  FUN_140e63610(uVar3,param_2,&local_e8,0,&local_68,0);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
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
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


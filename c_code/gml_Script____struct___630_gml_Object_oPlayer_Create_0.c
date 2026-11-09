// gml_Script____struct___630_gml_Object_oPlayer_Create_0 @ 0x140bf1360

undefined8 *
gml_Script____struct___630_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  bool bVar7;
  ulonglong in_stack_ffffffffffffff18;
  ulonglong in_stack_ffffffffffffff20;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  local_60 = "gml_Script_anon@5692@___struct___630@gml_Object_oPlayer_Create_0";
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_58 = 0x147;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  uStack_9c = 0xf;
  local_a8 = 0x100000100000407;
  local_88 = 0x100000100000407;
  uStack_80 = uStack_a0;
  uStack_7c = 0xf;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140041b80(&local_b8,&local_88);
  FUN_140e86c30(uVar4,DAT_141a0a728,0x80000000,&local_b8);
  local_58 = 0x148;
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_d8 = 0;
  local_d0 = 0;
  local_cc = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5e38);
  FUN_140e87440(uVar4,DAT_1419f5fd8,0x80000000,&local_78,
                in_stack_ffffffffffffff18 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  local_8c = DAT_141dda7f4;
  local_90 = DAT_141dda7f0;
  if ((1 << ((byte)DAT_141dda7f4 & 0x1f) & 0x46U) == 0) {
    local_98 = DAT_141dda7e8;
  }
  else {
    FUN_1400419b0(&local_98,&DAT_141dda7e8);
  }
  uVar4 = FUN_140069500(uVar4);
  uVar4 = FUN_140e63610(uVar4,param_2,&local_d8,0,&local_78,0);
  iVar3 = FUN_140e851f0(uVar4,&local_98,DAT_141955260,0);
  bVar7 = iVar3 != 0;
  if (bVar7) {
    uStack_7c = 0;
    local_88 = 0x4000000000000000;
    puVar6 = &local_88;
  }
  else {
    uStack_9c = 0;
    local_a8 = 0;
    puVar6 = &local_a8;
  }
  uVar2 = uStack_7c;
  uVar1 = uStack_9c;
  local_50 = *(undefined4 *)puVar6;
  uStack_4c = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_48 = *(undefined4 *)(puVar6 + 1);
  uStack_44 = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_50);
  if (bVar7) {
    if ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
  }
  if ((!bVar7) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140e86c30(uVar5,DAT_141a0cfc8,0x80000000,&local_c8);
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  DAT_141dc7a50 = (undefined8 *)local_68;
  return param_3;
}


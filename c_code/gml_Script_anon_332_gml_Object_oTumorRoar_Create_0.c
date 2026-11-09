// gml_Script_anon_332_gml_Object_oTumorRoar_Create_0 @ 0x140decc40

void gml_Script_anon_332_gml_Object_oTumorRoar_Create_0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong in_stack_ffffffffffffff58;
  ulonglong in_stack_ffffffffffffff60;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  
  local_40 = "gml_Object_oTumorProj_Step_0";
  local_38 = 0;
  local_48 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_48;
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_4c = 0xffffff;
  local_58 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_38 = 3;
  uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_6c = 0;
  local_78 = (longlong *)0x3fc999999999999a;
  FUN_140042560(&local_78,uVar2);
  FUN_1400460e0(uVar3,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_38 = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_6c = 6;
  in_stack_ffffffffffffff60 = in_stack_ffffffffffffff60 & 0xffffffffffffff00;
  in_stack_ffffffffffffff58 = in_stack_ffffffffffffff58 & 0xffffffffffffff00;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe0e8,0x80000000,&local_58,in_stack_ffffffffffffff58,
                in_stack_ffffffffffffff60);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_70 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_78,puVar4);
  }
  FUN_140042560(&local_78,uVar2);
  FUN_1400460e0(&local_58,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_58);
  local_38 = 6;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_6c = 6;
  local_78 = param_1;
  FUN_140e87440(&local_78,DAT_1419fe158,0x80000000,&local_68,
                in_stack_ffffffffffffff58 & 0xffffffffffffff00,
                in_stack_ffffffffffffff60 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_70 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) == 0) {
    local_78 = (longlong *)*puVar4;
  }
  else {
    FUN_1400419b0(&local_78,puVar4);
  }
  FUN_140042560(&local_78,uVar2);
  FUN_1400460e0(&local_68,&local_78);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_68);
  local_38 = 8;
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_98 = 0;
  local_90 = 0;
  local_8c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a01b58);
  FUN_140e63610(param_1,param_2,&local_98,0,uVar2,0);
  local_38 = 10;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02978);
  uStack_6c = 0;
  local_78 = (longlong *)0x0;
  iVar1 = FUN_140e851f0(uVar2,&local_78,DAT_141955260,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar1 != 0) {
    local_38 = 0xb;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02978);
    if (puVar4 != &local_88) {
      local_78 = (longlong *)*puVar4;
      uStack_70 = *(undefined4 *)(puVar4 + 1);
      uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_88);
      }
      FUN_140041b80(&local_88,&local_78);
    }
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_88);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  DAT_141dc7a50 = (undefined8 *)local_48;
  return;
}


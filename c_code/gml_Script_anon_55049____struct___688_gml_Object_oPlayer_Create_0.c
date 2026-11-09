// gml_Script_anon_55049____struct___688_gml_Object_oPlayer_Create_0 @ 0x140c45fd0

undefined8 *
gml_Script_anon_55049____struct___688_gml_Object_oPlayer_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *local_res8;
  code *pcVar5;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@54902@___struct___687@gml_Object_oPlayer_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0xb59;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  uVar2 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_8c = 0xffffff;
  local_98 = (undefined1 *)0x0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0;
  local_68 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xb5b;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f59d8);
  FUN_140e87440(uVar2,DAT_1419f5f58,0x80000000,&local_98,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  local_78 = local_98;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_78);
  local_res8 = local_88;
  puVar4 = (undefined8 *)FUN_140e63610(param_1,param_2,&local_68,1,uVar3,&local_res8);
  if (puVar4 != &local_b8) {
    local_78 = (undefined1 *)*puVar4;
    uStack_70 = *(undefined4 *)(puVar4 + 1);
    uStack_6c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_78);
  }
  local_48 = 0xb5c;
  uStack_6c = 0;
  local_78 = &DAT_bff0000000000000;
  iVar1 = FUN_140e851f0(&local_b8,&local_78,DAT_141955260,0);
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if (iVar1 != 0) {
    local_48 = 0xb5d;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_9c = 0;
    local_a8 = 0;
    FUN_140e87930(&local_b8,DAT_1419f5838,0x80000000,&local_a8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}


// gml_Object_oEnemyCageShambler_Draw_0 @ 0x1409752f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oEnemyCageShambler_Draw_0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined8 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_70 = "gml_Script_anon@44@gml_Object_oEnemyCageShambler_Other_76";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 2;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 3;
  uVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0318);
  FUN_140e87440(uVar1,DAT_1419f4a98,0x80000000,&local_98,(ulonglong)pcVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  uVar1 = FUN_140069500(uVar1);
  puVar4 = &local_98;
  puVar2 = (undefined8 *)FUN_140e63610(uVar1,param_2,&local_b8,0,puVar4,0);
  uVar5 = (undefined4)((ulonglong)puVar4 >> 0x20);
  if (puVar2 != &local_a8) {
    local_88 = *(undefined4 *)puVar2;
    uStack_84 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_80 = *(undefined4 *)(puVar2 + 1);
    uStack_7c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_88);
  }
  local_68 = 4;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  local_30 = &local_a8;
  local_88 = _DAT_1419ea5a0;
  uStack_84 = uRam00000001419ea5a4;
  uStack_80 = uRam00000001419ea5a8;
  uStack_7c = uRam00000001419ea5ac;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_88);
  local_28 = local_50;
  local_88 = _DAT_141dc6e60;
  uStack_84 = uRam0000000141dc6e64;
  uStack_80 = uRam0000000141dc6e68;
  uStack_7c = uRam0000000141dc6e6c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_88);
  local_20 = local_40;
  FUN_140e634e0(param_1,param_2,&local_b8,3,CONCAT44(uVar5,DAT_1419f4a48),&local_30);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


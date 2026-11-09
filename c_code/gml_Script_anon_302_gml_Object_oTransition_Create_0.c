// gml_Script_anon_302_gml_Object_oTransition_Create_0 @ 0x140dd9310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_302_gml_Object_oTransition_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong in_stack_ffffffffffffff40;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_70 = "gml_Object_oTrainingDummy_Step_0";
  local_68 = 0;
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_68 = 2;
  uStack_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_141a0a778,0x80000000,&local_88,(ulonglong)pcVar3 & 0xffffffffffffff00,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = (longlong *)local_88;
  uStack_b0 = uStack_80;
  uStack_ac = uStack_7c;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_b8);
  local_30 = local_60;
  local_b8 = (longlong *)CONCAT44(uRam0000000141dc78e4,_DAT_141dc78e0);
  uStack_b0 = uRam0000000141dc78e8;
  uStack_ac = uRam0000000141dc78ec;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_28 = local_50;
  local_b8 = (longlong *)CONCAT44(uRam00000001419ee554,_DAT_1419ee550);
  uStack_b0 = uRam00000001419ee558;
  uStack_ac = uRam00000001419ee55c;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_b8);
  local_20 = local_40;
  puVar1 = (undefined8 *)gml_Script_AngleRotateTowardsLerp(param_1,param_2,&local_a8,3,&local_30);
  if (puVar1 != &local_98) {
    local_b8 = (longlong *)*puVar1;
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_98);
  local_68 = 3;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
  FUN_140e63610(param_1,param_2,&local_a8,0,uVar2,0);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return;
}


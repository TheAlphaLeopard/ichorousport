// gml_Script_anon_864_gml_Object_oBodyPart_Create_0 @ 0x1406f15f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_864_gml_Object_oBodyPart_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong in_stack_ffffffffffffff40;
  undefined1 **ppuVar6;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_30;
  undefined1 *local_28 [2];
  
  local_60 = "gml_Object_oBodyBag_Step_0";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_58 = 4;
  FUN_140e98b30(param_1,param_2);
  local_58 = 6;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uStack_8c = 0;
  local_98 = 0;
  iVar2 = FUN_140e851f0(uVar3,&local_98,DAT_141955260,1);
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if (iVar2 != -2 && iVar2 < 1) {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_1419f5848,0x80000000,&local_78,(ulonglong)pcVar4 & 0xffffffffffffff00,
                  in_stack_ffffffffffffff40 & 0xffffffffffffff00);
    local_98 = CONCAT44(uRam0000000141dd5f4c,_DAT_141dd5f48);
    uStack_90 = uRam0000000141dd5f50;
    uStack_8c = DAT_141dd5f54;
    if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(local_50,&local_98);
    local_30 = local_50;
    uVar3 = FUN_140069500(uVar3);
    ppuVar6 = &local_30;
    puVar5 = &local_78;
    uVar3 = FUN_140e63610(uVar3,param_2,&local_a8,1,puVar5,ppuVar6);
    cVar1 = FUN_140e491e0(uVar3);
    if (cVar1 != '\0') {
      local_58 = 8;
      if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      local_b8 = 0;
      local_b0 = 0;
      local_ac = 5;
      uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
      FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_88,(ulonglong)puVar5 & 0xffffffffffffff00,
                    (ulonglong)ppuVar6 & 0xffffffffffffff00);
      local_98 = CONCAT44(uRam0000000141dd5f4c,_DAT_141dd5f48);
      uStack_90 = uRam0000000141dd5f50;
      uStack_8c = DAT_141dd5f54;
      if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_40);
      }
      FUN_140041b80(local_40,&local_98);
      local_28[0] = local_40;
      uVar3 = FUN_140069500(uVar3);
      FUN_140e63610(uVar3,param_2,&local_b8,1,&local_88,local_28);
    }
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}


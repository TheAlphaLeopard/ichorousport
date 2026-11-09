// gml_Script____struct___795_gml_Object_oShopSalesman_Create_0 @ 0x140d7e5c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___795_gml_Object_oShopSalesman_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 uVar6;
  ulonglong uVar5;
  undefined8 **ppuVar7;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_70;
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined8 *local_50;
  undefined1 *local_48 [2];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_80 = "gml_Script_anon@3448@___struct___795@gml_Object_oShopSalesman_Create_0";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 0xa0;
  _eh_vector_constructor_iterator_(&local_70,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_8c = 0xffffff;
  local_98 = 0;
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  local_bc = 0;
  local_c8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_78 = 0xa1;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419ff7c8);
  FUN_140e63610(param_1,param_2,&local_c8,0,uVar3,0);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_78 = 0xa3;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f7008);
  if (puVar4 != &local_70) {
    local_a8 = *puVar4;
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_70);
    }
    FUN_140041b80(&local_70,&local_a8);
  }
  local_50 = &local_70;
  ppuVar7 = &local_50;
  uVar5 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar5,ppuVar7);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_78 = 0xa4;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_98,uVar5 & 0xffffffffffffff00,
                  (ulonglong)ppuVar7 & 0xffffffffffffff00);
    local_a8 = CONCAT44(uRam0000000141ddb7ac,_DAT_141ddb7a8);
    uStack_a0 = uRam0000000141ddb7b0;
    uStack_9c = DAT_141ddb7b4;
    if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(local_60,&local_a8);
    local_48[0] = local_60;
    uVar3 = FUN_140069500(uVar3);
    FUN_140e63610(uVar3,param_2,&local_b8,1,&local_98,local_48);
    local_78 = 0xa5;
    uStack_9c = 0xd;
    local_a8 = 0x3ff0000000000000;
    if (&local_a8 != puVar2) {
      local_38 = 0;
      uStack_34 = 0x3ff00000;
      uStack_30 = uStack_a0;
      uStack_2c = 0xd;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_38);
    }
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  _eh_vector_destructor_iterator_(&local_70,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}


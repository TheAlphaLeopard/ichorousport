// gml_Script____struct___510_gml_Object_oEnemyRotFly_Create_0 @ 0x140a312d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script____struct___510_gml_Object_oEnemyRotFly_Create_0
               (longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 **ppuVar4;
  undefined8 *puVar5;
  undefined4 uVar7;
  ulonglong uVar6;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined4 local_68 [3];
  byte local_5c;
  undefined4 *local_58;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oEnemyRotFly_Alarm_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_28 = 2;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar2 != local_78) {
    local_48 = *puVar2;
    uStack_44 = puVar2[1];
    uStack_40 = puVar2[2];
    uStack_3c = puVar2[3];
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_48);
  }
  local_58 = local_78;
  ppuVar4 = &local_58;
  uVar6 = CONCAT44(uVar7,DAT_141a02ef8);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_a8,1,uVar6,ppuVar4);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_28 = 5;
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_88,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar4 & 0xffffffffffffff00);
    local_48 = _DAT_141dd8d58;
    uStack_44 = uRam0000000141dd8d5c;
    uStack_40 = uRam0000000141dd8d60;
    uStack_3c = DAT_141dd8d64;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_48);
    local_58 = local_78;
    uVar3 = FUN_140069500(uVar3);
    ppuVar4 = &local_58;
    puVar5 = &local_a8;
  }
  else {
    local_28 = 3;
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    local_98 = 0;
    local_90 = 0;
    local_8c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_88,uVar6 & 0xffffffffffffff00,
                  (ulonglong)ppuVar4 & 0xffffffffffffff00);
    local_48 = _DAT_141dd8d48;
    uStack_44 = uRam0000000141dd8d4c;
    uStack_40 = uRam0000000141dd8d50;
    uStack_3c = DAT_141dd8d54;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_48);
    local_50 = local_68;
    uVar3 = FUN_140069500(uVar3);
    ppuVar4 = &local_50;
    puVar5 = &local_98;
  }
  FUN_140e63610(uVar3,param_2,puVar5,1,&local_88,ppuVar4);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}


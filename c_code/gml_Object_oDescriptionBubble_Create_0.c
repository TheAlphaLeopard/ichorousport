// gml_Object_oDescriptionBubble_Create_0 @ 0x1408f1ae0

void gml_Object_oDescriptionBubble_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined4 *local_res8;
  undefined4 uVar5;
  ulonglong uVar4;
  undefined4 **ppuVar6;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78 [3];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Object_oDebugPanel_Step_0";
  local_28 = 0;
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_28 = 2;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419eec48);
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
  local_res8 = local_78;
  ppuVar6 = &local_res8;
  uVar4 = CONCAT44(uVar5,DAT_141a02738);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_58,1,uVar4,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_28 = 4;
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    local_88 = 0;
    local_80 = 0;
    local_7c = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eec88);
    FUN_140e87440(uVar3,DAT_141a57170,0x80000000,&local_68,uVar4 & 0xffffffffffffff00,
                  (ulonglong)ppuVar6 & 0xffffffffffffff00);
    uVar3 = FUN_140069500(uVar3);
    FUN_140e63610(uVar3,param_2,&local_88,0,&local_68,0);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return;
}


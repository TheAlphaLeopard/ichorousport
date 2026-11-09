// gml_Script_InputVirtualDebugDraw @ 0x1403880e0

uint * gml_Script_InputVirtualDebugDraw(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  uint *puVar1;
  undefined1 *local_res18 [2];
  undefined4 uVar2;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  ulonglong local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  
  local_30 = "gml_Script_InputVirtualCreate";
  local_38 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_38;
  local_28 = 7;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_5c = 0;
  local_68 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_28 = 9;
  local_48 = DAT_1419fe4e8 & 0xffffff;
  uStack_44 = (int)(DAT_1419fe4e8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_44 == 0xf) {
    uStack_44 = 0x4000004;
  }
  else {
    uStack_44 = uStack_44 | 0x1000000;
  }
  uStack_4c = 0xf;
  local_58 = CONCAT44(uStack_44,DAT_1419fe4e8) & 0xffffffff00ffffff;
  uStack_40 = uStack_50;
  uStack_3c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_48);
  local_res18[0] = local_78;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_68,1,CONCAT44(uVar2,DAT_1419fd6d8),
                                 local_res18);
  if (puVar1 != param_3) {
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_48);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_38;
  return param_3;
}


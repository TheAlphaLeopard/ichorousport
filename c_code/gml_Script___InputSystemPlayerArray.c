// gml_Script___InputSystemPlayerArray @ 0x1400d5730

uint * gml_Script___InputSystemPlayerArray
                 (undefined8 param_1,undefined8 param_2,uint *param_3,int param_4,
                 undefined8 *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [12];
  byte local_64;
  uint local_60 [3];
  byte local_54;
  ulonglong local_48;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_30;
  uint *local_28;
  
  local_90 = 
  "gml_Script_anon@825@_playerArray@anon@93@__InputSystemPlayerArray@__InputSystemPlayerArray";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x1a;
  uVar2 = 1;
  _eh_vector_constructor_iterator_(local_80,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_88 = 0x1c;
  local_b8 = DAT_1419fd568 & 0xffffff;
  uStack_b4 = (int)(DAT_1419fd568 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_3c = 0xf;
  local_48 = CONCAT44(uStack_b4,DAT_1419fd568) & 0xffffffff00ffffff;
  uStack_b0 = uStack_40;
  uStack_ac = 0xf;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_b8);
  local_30 = local_70;
  if (param_4 < 1) {
    puVar1 = (uint *)&DAT_1419df7b0;
  }
  else {
    puVar1 = (uint *)*param_5;
    if (puVar1 == local_60) goto LAB_1400d588d;
  }
  local_b8 = *puVar1;
  uStack_b4 = puVar1[1];
  uStack_b0 = puVar1[2];
  uStack_ac = puVar1[3];
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_b8);
LAB_1400d588d:
  local_28 = local_60;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar2,DAT_1419fd6d8),&local_30
                                );
  if (puVar1 != param_3) {
    local_b8 = *puVar1;
    uStack_b4 = puVar1[1];
    uStack_b0 = puVar1[2];
    uStack_ac = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_80,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}


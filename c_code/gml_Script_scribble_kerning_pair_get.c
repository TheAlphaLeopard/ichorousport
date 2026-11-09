// gml_Script_scribble_kerning_pair_get @ 0x140475c00

uint * gml_Script_scribble_kerning_pair_get
                 (undefined8 param_1,undefined8 param_2,uint *param_3,int param_4,
                 undefined8 *param_5)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined4 uVar3;
  undefined8 local_a8;
  undefined4 local_9c;
  ulonglong local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_60 [16];
  ulonglong local_50;
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  ulonglong *local_28;
  undefined1 *local_20;
  
  local_70 = "gml_Script_scribble_is_text_element";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 4;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0;
  local_a8 = 0;
  param_3[3] = 5;
  param_3[0] = 0;
  param_3[1] = 0;
  local_68 = 6;
  if (param_4 < 1) {
    puVar2 = &DAT_1419df7b0;
  }
  else {
    puVar2 = (ulonglong *)*param_5;
    if (puVar2 == &local_50) goto LAB_140475ce8;
  }
  local_98 = *puVar2;
  uStack_90 = (uint)puVar2[1];
  uStack_8c = *(undefined4 *)((longlong)puVar2 + 0xc);
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_50);
  }
  FUN_140041b80(&local_50,&local_98);
LAB_140475ce8:
  local_28 = &local_50;
  local_88 = DAT_141a05e88 & 0xffffff;
  uStack_84 = (int)(DAT_141a05e88 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_84 == 0xf) {
    uStack_84 = 0x4000004;
  }
  else {
    uStack_84 = uStack_84 | 0x1000000;
  }
  uStack_8c = 0xf;
  local_98 = CONCAT44(uStack_84,DAT_141a05e88) & 0xffffffff00ffffff;
  uStack_80 = uStack_90;
  uStack_7c = 0xf;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_88);
  local_20 = local_40;
  puVar1 = (uint *)FUN_140e634e0(param_1,param_2,&local_a8,2,CONCAT44(uVar3,DAT_1419f9188),&local_28
                                );
  if (puVar1 != param_3) {
    local_88 = *puVar1;
    uStack_84 = puVar1[1];
    uStack_80 = puVar1[2];
    uStack_7c = puVar1[3];
    if ((1 << ((byte)param_3[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}


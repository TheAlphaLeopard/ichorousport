// gml_Object_oScreenRibbon_Draw_0 @ 0x140d68150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oScreenRibbon_Draw_0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  ulonglong in_stack_ffffffffffffff40;
  undefined1 **ppuVar5;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 local_30 [12];
  byte local_24;
  undefined1 *local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  
  local_60 = "gml_Object_oScreenRibbon_Other_4";
  local_58 = 0;
  local_68 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_68;
  pcVar2 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_50,0x10,3,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_58 = 2;
  uStack_ac = 6;
  uVar3 = (ulonglong)pcVar2 & 0xffffffffffffff00;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_88,uVar3,
                in_stack_ffffffffffffff40 & 0xffffffffffffff00);
  uVar4 = (undefined4)(uVar3 >> 0x20);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = local_88;
  uStack_b0 = uStack_80;
  uStack_ac = uStack_7c;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_20 = local_50;
  local_b8 = CONCAT44(uRam00000001419edbf4,_DAT_1419edbf0);
  uStack_b0 = uRam00000001419edbf8;
  uStack_ac = uRam00000001419edbfc;
  if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_40);
  }
  FUN_140041b80(local_40,&local_b8);
  local_18 = local_40;
  local_b8 = CONCAT44(uRam00000001419edbe4,_DAT_1419edbe0);
  uStack_b0 = uRam00000001419edbe8;
  uStack_ac = uRam00000001419edbec;
  if ((1 << (local_24 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_30);
  }
  FUN_140041b80(local_30,&local_b8);
  local_10 = local_30;
  ppuVar5 = &local_20;
  uVar3 = CONCAT44(uVar4,DAT_141a00c58);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_78,3,uVar3,ppuVar5);
  if (puVar1 != &local_a8) {
    local_b8 = *puVar1;
    uStack_b0 = *(undefined4 *)(puVar1 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    FUN_140041b80(&local_a8,&local_b8);
  }
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_a8);
  local_58 = 3;
  uStack_ac = 6;
  local_b8 = param_1;
  FUN_140e87440(&local_b8,DAT_1419fe158,0x80000000,&local_98,uVar3 & 0xffffffffffffff00,
                (ulonglong)ppuVar5 & 0xffffffffffffff00);
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  FUN_140162d40(&local_98,0x12e);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_98);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_50,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_68;
  return;
}


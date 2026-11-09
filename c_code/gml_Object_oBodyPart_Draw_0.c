// gml_Object_oBodyPart_Draw_0 @ 0x1406f3b30

void gml_Object_oBodyPart_Draw_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  undefined8 **ppuVar6;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined8 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  
  local_50 = "gml_Object_oBodyPart_Alarm_0";
  local_48 = 0;
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(&local_98,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_48 = 2;
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x10000010000014c;
  local_d8 = 0x14c;
  uStack_d4 = 0x1000001;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  FUN_140041b80(&local_98,&local_d8);
  local_40 = &local_98;
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x1000001000002f1;
  local_d8 = 0x2f1;
  uStack_d4 = 0x1000001;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_38 = local_88;
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x10000010000012a;
  local_d8 = 0x12a;
  uStack_d4 = 0x1000001;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  local_30 = local_78;
  uStack_dc = 0xf;
  local_e8 = (longlong *)0x1000001000000b4;
  local_d8 = 0xb4;
  uStack_d4 = 0x1000001;
  uStack_d0 = uStack_e0;
  uStack_cc = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_d8);
  local_28 = local_68;
  ppuVar6 = &local_40;
  uVar4 = CONCAT44(uVar5,DAT_1419fdca8);
  puVar1 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_c8,4,uVar4,ppuVar6);
  if (puVar1 != &local_b8) {
    local_d8 = *(undefined4 *)puVar1;
    uStack_d4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_d0 = *(undefined4 *)(puVar1 + 1);
    uStack_cc = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_d8);
  }
  local_48 = 3;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04cb8);
  uStack_dc = 6;
  uVar4 = uVar4 & 0xffffffffffffff00;
  local_e8 = param_1;
  FUN_140e87440(&local_e8,DAT_141a0a728,0x80000000,&local_a8,uVar4,
                (ulonglong)ppuVar6 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_40 = &local_b8;
  local_d8 = (undefined4)local_a8;
  uStack_d4 = local_a8._4_4_;
  uStack_d0 = uStack_a0;
  uStack_cc = uStack_9c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_d8);
  local_38 = local_88;
  FUN_140e609c0(param_1);
  puVar3 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_c8,2,CONCAT44(uVar5,DAT_1419f5d88),&local_40);
  if (puVar3 != puVar2) {
    local_d8 = *puVar3;
    uStack_d4 = puVar3[1];
    uStack_d0 = puVar3[2];
    uStack_cc = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_d8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return;
}


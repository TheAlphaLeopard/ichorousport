// gml_Script_anon_9520____struct___478_gml_Object_oEnemyDireMutt_Create_0 @ 0x1409c5620

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_9520____struct___478_gml_Object_oEnemyDireMutt_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  byte bVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  
  local_110 = "gml_Script_anon@8189@___struct___478@gml_Object_oEnemyDireMutt_Create_0";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x1b9;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x1ba;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0f48);
  cVar2 = FUN_140e491e0(uVar3);
  bVar6 = cVar2 == '\0';
  if (bVar6) {
    local_d4 = 0xf;
    local_e0 = 0x1000001000000fd;
    puVar4 = &local_e0;
    bVar5 = uStack_150._4_1_;
  }
  else {
    uStack_150 = CONCAT44(0xf,(undefined4)uStack_150);
    local_158 = 0x1000001000000fc;
    puVar4 = &local_158;
    bVar5 = 0xf;
  }
  uVar1 = local_d4;
  local_168 = *puVar4;
  uStack_160 = puVar4[1];
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  FUN_140041b80(&local_f0,&local_168);
  if (bVar6) {
    if ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
  }
  if ((!bVar6) && ((1 << (bVar5 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f0);
  local_108 = 0x1bb;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
  local_108 = 0x1bc;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_138);
  local_108 = 0x1be;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_13c = 0;
  local_148 = 0;
  FUN_140e87930(uVar3,DAT_141a0a848,0x80000000,&local_148);
  local_108 = 0x1bf;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0;
  local_108 = 0x1c1;
  uStack_150 = CONCAT44(0xd,(undefined4)uStack_150);
  local_158 = 0;
  local_168 = 0;
  uStack_160 = uStack_150;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  FUN_140041b80(&local_100,&local_168);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar3,DAT_141a06588,0x80000000,&local_100);
  local_108 = 0x1c2;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uStack_150 = CONCAT44(0xf,(undefined4)uStack_150);
  local_158 = 0x1000002000000ac;
  local_168 = 0x1000002000000ac;
  uStack_160 = CONCAT44(0xf,(undefined4)uStack_150);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_168);
  local_68 = local_c8;
  local_168 = CONCAT44(uRam00000001419ea964,_DAT_1419ea960);
  uStack_160 = CONCAT44(uRam00000001419ea96c,uRam00000001419ea968);
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_168);
  local_60 = local_b8;
  local_168 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_160 = CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_168);
  local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_160 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  local_58 = local_a8;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_168);
  local_50 = local_98;
  local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_160 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_168);
  local_48 = local_88;
  local_78 = FUN_140e794b0(0xcccccccd,0x3ff4000000000000);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_40 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_178,6,CONCAT44(uVar7,DAT_141a0a2e8),&local_68);
  local_108 = 0x1c3;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a11dd8);
  FUN_140e63610(param_1,param_2,&local_178,0,uVar3,0);
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

